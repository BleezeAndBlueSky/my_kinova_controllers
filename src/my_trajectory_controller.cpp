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

#include <my_kinova_controllers/common.hpp>
#include <feedback_linearzation.hpp>

namespace my_kinova_controllers {

using namespace std;

class MyTrajectoryController : public controller_interface::Controller<hardware_interface::EffortJointInterface>
{
public:
    std::unique_ptr<realtime_tools::RealtimePublisher<control_msgs::JointTrajectoryControllerState> > controller_state_publisher_ptr_;
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
    MyTrajectoryController(FeedbackLinearization setPointController) : joints_(6), feedback_linearization_controller_(setPointController) {

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
        
        trajectory_command_sub_ = nh.subscribe("command", 1, &MyTrajectoryController::trajectoryCommandCB, this);
        controller_state_publisher_ptr_.reset(new realtime_tools::RealtimePublisher<control_msgs::JointTrajectoryControllerState>(nh, "state", 1));
    
        return true;
    }

    void update(const ros::Time& time, const ros::Duration& period) {
        trajectory_tmp_ = *(trajectories_container_.readFromRT());

        old_time_data_ = *(time_data_.readFromRT());

        // Update time data
        TimeData time_data;
        time_data.time   = time;                                     // Cache current time
        time_data.period = period;                                   // Cache current control period
        time_data.uptime = old_time_data_.uptime + period; // Update controller uptime
        time_data_.writeFromNonRT(time_data); // TODO: Grrr, we need a lock-free data structure here!

        switch (control_mode_) {
        case HOLD_POSITION:
            for(size_t i = 0; i < joints_.size(); ++i) {
                current_states_.position[i] = joints_[i].getPosition();
                current_states_.velocity[i] = joints_[i].getVelocity();
                desired_states_.position[i] = joints_[i].getPosition();
                desired_states_.velocity[i] = joints_[i].getVelocity();
            }
            break;

        case TRAJECTORY_TRACKING:
            for(size_t i = 0; i < joints_.size(); ++i) {
                current_states_.position[i] = joints_[i].getPosition();
                current_states_.velocity[i] = joints_[i].getVelocity();
            }
            
            break;

        default:
            ROS_WARN_STREAM("??");
        }
    }

    void starting(const ros::Time& time) {
        TimeData time_data;
        time_data.time   = time;
        time_data.uptime = ros::Time(0.0);
        time_data_.initRT(time_data);

        for(size_t i = 0; i < joints_.size(); ++i) {
            current_states_.position[i] = joints_[i].getPosition();
            desired_states_.position[i] = joints_[i].getPosition();
            current_states_.velocity[i] = joints_[i].getVelocity();
            desired_states_.velocity[i] = joints_[i].getVelocity();
        }

        // setHoldPosition(time_data.uptime);
        trajectory_msgs::JointTrajectory initData;
        trajectories_container_.initRT(initData);

        control_mode_ = HOLD_POSITION;
        system_state_ = STANDBY;

    }
    
    void stopping(const ros::Time& time) {

    }

protected:
    void trajectoryCommandCB(trajectory_msgs::JointTrajectoryConstPtr &msg) {
        
    }

    // void setHoldPosition(ros::Time& time) {
    //     // set_point_controller_.computeInput(desired_states_, current_states_);
    //     control_mode_ = SET_POINT;

    // }



};




}