#include <iostream>
#include <vector>
#include <string>

#include <eigen3/Eigen/Eigen>

#include <my_kinova_controllers/common.hpp>

using namespace std;

namespace my_kinova_controllers {

class FeedbackLinearization {
private:
    Eigen::Matrix<double, 6, 1> kp_, kd_;

    Eigen::Matrix<double, 6, 6> getMq(States currStates) {


    }

    Eigen::Matrix<double, 6, 6> getCqdq(States currStates) {

    }

    Eigen::Matrix<double, 6, 1> getGq(States currStates) {

    }

    Eigen::Matrix<double, 6, 1> getQddot(States states) {
        Eigen::Matrix<double, 6, 1> qddot;
        qddot << states.acceleration[0], states.acceleration[1], states.acceleration[2], states.acceleration[3], states.acceleration[4], states.acceleration[5];
        return qddot;
    }

    Eigen::Matrix<double, 6, 1> getQdot(States states) {
        Eigen::Matrix<double, 6, 1> qdot;
        qdot << states.velocity[0], states.velocity[1], states.velocity[2], states.velocity[3], states.velocity[4], states.velocity[5];
        return qdot;
    }

    Eigen::Matrix<double, 6, 1> getQ(States states) {
        Eigen::Matrix<double, 6, 1> q;
        q << states.position[0], states.position[1], states.position[2], states.position[3], states.position[4], states.position[5];
        return q;
    }

    Eigen::Matrix<double, 6, 1> getV(States desirStates, States currStates) {
        Eigen::Matrix<double, 6, 1> v1, v2;// = kp_ * getQ(currStates) - kd_ * getQdot(currStates);
        Eigen::Matrix<double, 6, 1> e;// = getQ(currStates) - getQ(desirStates);
        Eigen::Matrix<double, 6, 1> edot = getQdot(currStates) - getQdot(desirStates);

        for(size_t i = 0; i < 6; ++i) {
            e(i, 0) = angles::shortest_angular_distance(currStates.position[i], desirStates.position[i]); // to - from
        }

        for(size_t i = 0; i < v1.rows(); ++i) {
            v1(i, 0) = kp_(i, 0) * e(i, 0);
        }
        for(size_t i = 0; i < v2.rows(); ++i) {
            v2(i, 0) = kd_(i, 0) * edot(i, 0);
        }
        return v1 + v2 + getQddot(desirStates);
    }

public:
    FeedbackLinearization(Eigen::Matrix<double, 6, 1> kp, Eigen::Matrix<double, 6, 1> kd) : kp_(kp), kd_(kd) {

    }

    FeedbackLinearization(const FeedbackLinearization &obj) {
        kp_ = obj.kp_;
        kd_ = obj.kd_;
    }

    std::vector<double> computeInput(States desirStates, States currStates) {
        Eigen::Matrix<double, 6, 1> tau = getMq(currStates) * getV(desirStates, currStates) + getCqdq(currStates) * getQdot(currStates) + getGq(currStates);
        
        std::vector<double> results = {tau(0, 0), tau(1, 0), tau(2, 0), tau(3, 0), tau(4, 0), tau(5, 0)};
        return results;
    }


};






class TrajectoryTrackingFeedbackLinearization {




};




}