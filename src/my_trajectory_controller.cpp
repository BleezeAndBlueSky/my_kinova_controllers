/*

    By Yiran Fang(yfang5@wpi.edu)

*/

#include <iostream>
#include <vector>
#include <string>

#include <ros/ros.h>
#include <ros/node_handle.h>
#include <hardware_interface/joint_command_interface.h>
#include <controller_interface/controller.h>

#include <realtime_tools/realtime_box.h>
#include <realtime_tools/realtime_buffer.h>
#include <realtime_tools/realtime_publisher.h>
#include <realtime_tools/realtime_server_goal_handle.h>

#include <trajectory_msgs/JointTrajectory.h>
#include <control_msgs/JointControllerState.h>
#include <control_msgs/JointTrajectoryControllerState.h>

#include "my_kinova_controllers/common.hpp"
#include "my_kinova_controllers/feedback_linearzation.hpp"

#include <pluginlib/class_list_macros.hpp>

using namespace std;

namespace my_kinova_controllers {



class MyTrajectoryController : public controller_interface::Controller<hardware_interface::EffortJointInterface>
{
public:
    std::unique_ptr<realtime_tools::RealtimePublisher<control_msgs::JointTrajectoryControllerState> > controller_state_publisher_ptr_;
    ros::Time last_state_publish_time_;
    ros::Subscriber trajectory_command_sub_;

    realtime_tools::RealtimeBuffer<trajectory_msgs::JointTrajectory> trajectories_container_;
    trajectory_msgs::JointTrajectory trajectory_tmp_;
    // Commands command_struct_; // pre-allocated memory that is re-used to set the realtime buffer

    std::vector<hardware_interface::JointHandle> joints_;

    States desired_states_;
    States current_states_;
    States state_errors_;

    realtime_tools::RealtimeBuffer<TimeData> time_data_;
    TimeData old_time_data_;

    FeedbackLinearization feedback_linearization_controller_;

    enum control_mode
    {
        HOLD_POSITION = 0, 
        TRAJECTORY_TRACKING = 1
    };

    enum system_state
    {
        UNACITVE = 0,
        STANDBY = 1,
        WORKING = 2
    };

    int control_mode_ = HOLD_POSITION;
    int system_state_ = UNACITVE;

public:
    MyTrajectoryController() : joints_(6), last_state_publish_time_(0) {
        
    }

    bool init(hardware_interface::EffortJointInterface* hw, ros::NodeHandle &nh) {
        vector<string> joint_names = {"joint_1","joint_2", "joint_3", "joint_4", "joint_5", "joint_6"};
        for(size_t i = 0; i < joint_names.size(); ++i) {
            try{
                hw->getHandle(joint_names[i]);
            }
            catch(...) {
                ROS_ERROR_STREAM("Could not find joint '" << joint_names[i] << "' in '" << this->getHardwareInterfaceType() << "'.");
                return false;
            }            
        }
        
        trajectory_command_sub_ = nh.subscribe<trajectory_msgs::JointTrajectory>("command", 1, &MyTrajectoryController::trajectoryCommandCB, this);
        controller_state_publisher_ptr_.reset(new realtime_tools::RealtimePublisher<control_msgs::JointTrajectoryControllerState>(nh, "state", 1));
        
        {
            controller_state_publisher_ptr_->lock();
            controller_state_publisher_ptr_->msg_.joint_names = joint_names;
            controller_state_publisher_ptr_->msg_.desired.positions.resize(joints_.size());
            controller_state_publisher_ptr_->msg_.desired.velocities.resize(joints_.size());
            controller_state_publisher_ptr_->msg_.desired.accelerations.resize(joints_.size());
            controller_state_publisher_ptr_->msg_.actual.positions.resize(joints_.size());
            controller_state_publisher_ptr_->msg_.actual.velocities.resize(joints_.size());
            controller_state_publisher_ptr_->msg_.error.positions.resize(joints_.size());
            controller_state_publisher_ptr_->msg_.error.velocities.resize(joints_.size());
            controller_state_publisher_ptr_->unlock();
        }
        return true;
    }

    void update(const ros::Time& time, const ros::Duration& period) {
        trajectory_tmp_ = *(trajectories_container_.readFromRT());

        old_time_data_ = *(time_data_.readFromRT());

        // Update time data
        TimeData time_data;
        time_data.time   = time;                                     // Cache current time
        time_data.period = period;                                   // Cache current control period
        // time_data.uptime = old_time_data_.uptime + period; // Update controller uptime
        time_data_.writeFromNonRT(time_data); // TODO: Grrr, we need a lock-free data structure here!

        for(size_t i = 0; i < joints_.size(); ++i) {
            current_states_.position[i] = joints_[i].getPosition();
            current_states_.velocity[i] = joints_[i].getVelocity();
        }

        bool check_if_reach_goal = true;
        switch (control_mode_) {
        case HOLD_POSITION:
            for(size_t i = 0; i < joints_.size(); ++i) {
                desired_states_.position[i] = current_states_.position[i];
                desired_states_.velocity[i] = 0;
                desired_states_.acceleration[i] = 0;
            }
            desired_states_.time_from_start = ros::Duration(0.0);
            current_states_.time_from_start = ros::Duration(0.0);
            break;

        case TRAJECTORY_TRACKING:
            desired_states_ = sampleFromTrajMsg(trajectory_tmp_, time_data.time, check_if_reach_goal);
            current_states_.time_from_start = desired_states_.time_from_start;
            break;

        default:
            ROS_WARN_STREAM("??Unknown control mode");
        }
        
        for(size_t i = 0; i < joints_.size(); ++i) {
            if(!std::abs(desired_states_.position[i] - current_states_.position[i] < 1e-5) || 
               !std::abs(desired_states_.velocity[i] - current_states_.velocity[i] < 1e-5)) {
                check_if_reach_goal = false;
            }
        }

        if(check_if_reach_goal) {
            ROS_INFO("Reach the goal!!");
            control_mode_ = HOLD_POSITION;
            system_state_ = STANDBY;
        }


        std::vector<double> joints_input_effort = feedback_linearization_controller_.computeInput(desired_states_, current_states_);
        for(size_t i = 0; i < joints_.size(); ++i) {
            joints_[i].setCommand(joints_input_effort[i]);
        }

        publishStates(time);
    }

    void starting(const ros::Time& time) {
        TimeData time_data;
        time_data.time   = time;
        // time_data.uptime = ros::Time(0.0);
        time_data_.initRT(time_data);

        for(size_t i = 0; i < joints_.size(); ++i) {
            current_states_.position[i] = joints_[i].getPosition();
            current_states_.velocity[i] = joints_[i].getVelocity();
            desired_states_.position[i] = current_states_.position[i];
            desired_states_.velocity[i] = 0;
        }

        trajectory_msgs::JointTrajectory initData;
        trajectories_container_.initRT(initData);

        control_mode_ = HOLD_POSITION;
        system_state_ = STANDBY;

    }
    
    void stopping(const ros::Time& time) {
        system_state_ = UNACITVE;
    }

protected:
    void trajectoryCommandCB(const trajectory_msgs::JointTrajectoryConstPtr &msg) {
        ROS_INFO_STREAM("Recieve a trajectory msg. timestamp: " << msg->header.stamp);

        if(system_state_ == WORKING) {
            ROS_WARN_STREAM("Won't accept new trajectory while working on another.");
            return;
        }

        trajectory_msgs::JointTrajectory clone(*msg);
        TimeData time_data = *(time_data_.readFromRT());        
        if(msg->header.stamp == ros::Time(0.0)) {
            clone.header.stamp = time_data.time;
        }
        if(msg->header.stamp < time_data.time) {
            ROS_WARN_STREAM("First input trajectory point maybe later than current timestamp!" << std::endl << 
                            "time_data.time   : " << time_data.time << std::endl << 
                            "msg->header.stamp: " << msg->header.stamp);
        }

        if(msg->points.empty()) {
            ROS_WARN_STREAM("trajectory.points is empty, still hold position");
            return;
        }
        if(msg->joint_names.size() != joints_.size()) {
            ROS_WARN_STREAM("input trajectory joints number does not match. Still hold position.");
            return;
        }

        control_mode_ = TRAJECTORY_TRACKING;
        system_state_ = WORKING;
        trajectories_container_.writeFromNonRT(clone);
    }

    States sampleFromTrajMsg(trajectory_msgs::JointTrajectory& msg, ros::Time& time, bool& if_reach_goal) {
        States desired_states;
        if(time > msg.header.stamp + msg.points.back().time_from_start) { // already reach the end?
            for(size_t j = 0; j < joints_.size(); ++j) {
                desired_states.position[j] = msg.points.back().positions[j];
                desired_states.velocity[j] = 0;
                desired_states.acceleration[j] = 0;
            }
            if_reach_goal = true;
        }
        else if(time < msg.header.stamp) { // before starting, hold position //try to reach the first point of the trajectory
            for(size_t j = 0; j < joints_.size(); ++j) {
                desired_states_.position[j] = current_states_.position[j];//msg.points[0].positions[j];
                desired_states_.velocity[j] = 0;
                desired_states_.acceleration[j] = 0;
            }
            if_reach_goal = false;
        }
        else {
            for(size_t i = 0; i < msg.points.size() - 1; ++i) {
                ros::Time point_time = msg.header.stamp + msg.points[i].time_from_start;
                if(time > point_time) {
                    for(size_t j = 0; j < joints_.size(); ++j) {
                        auto dt = (msg.points[i + 1].time_from_start - msg.points[i].time_from_start).toSec();
                        if(dt > 1e-6) {
                            auto dx_dt = (msg.points[i + 1].positions[j] - msg.points[i].positions[j]) / dt;
                            auto dv_dt = (msg.points[i + 1].velocities[j] - msg.points[i].velocities[j]) / dt;
                            auto da_dt = (msg.points[i + 1].accelerations[j] - msg.points[i].accelerations[j]) / dt;

                            desired_states_.position[j] = msg.points[i].positions[j] + dx_dt * (time - point_time).toSec();
                            desired_states_.velocity[j] = msg.points[i].velocities[j] + dv_dt * (time - point_time).toSec();
                            desired_states_.acceleration[j] = msg.points[i].accelerations[j] + da_dt * (time - point_time).toSec();
                        }
                        else {
                            ROS_ERROR_STREAM("dt is almost zero, or wrong trajectory timestamp order, dt = " << dt);
                        }

                    }
                }
            }
            if_reach_goal = false;
        }
        desired_states_.time_from_start = time - msg.header.stamp;
        
        return desired_states;
    }

    void publishStates(const ros::Time& time) {
        if(last_state_publish_time_ + ros::Duration(0.02) < time) { // 20ms publish cycle
            if (controller_state_publisher_ptr_ && controller_state_publisher_ptr_->trylock())
            {
                controller_state_publisher_ptr_->msg_.header.stamp          = time_data_.readFromRT()->time;
                controller_state_publisher_ptr_->msg_.desired.positions     = desired_states_.position;
                controller_state_publisher_ptr_->msg_.desired.velocities    = desired_states_.velocity;
                controller_state_publisher_ptr_->msg_.desired.accelerations = desired_states_.acceleration;
                controller_state_publisher_ptr_->msg_.desired.time_from_start = ros::Duration(desired_states_.time_from_start);
                controller_state_publisher_ptr_->msg_.actual.positions      = current_states_.position;
                controller_state_publisher_ptr_->msg_.actual.velocities     = current_states_.velocity;
                controller_state_publisher_ptr_->msg_.actual.time_from_start = ros::Duration(current_states_.time_from_start);
                // controller_state_publisher_ptr_->msg_.error.positions       = state_errors_.position;
                // controller_state_publisher_ptr_->msg_.error.velocities      = state_errors_.velocity;
                // controller_state_publisher_ptr_->msg_.error.time_from_start = ros::Duration(state_error_.time_from_start);
                controller_state_publisher_ptr_->unlockAndPublish();
            }
        }

    }


};




}

PLUGINLIB_EXPORT_CLASS( my_kinova_controllers::MyTrajectoryController, controller_interface::ControllerBase)
