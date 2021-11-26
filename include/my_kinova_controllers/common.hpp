#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

#include <ros/ros.h>
#include <angles/angles.h>

namespace my_kinova_controllers {

class States {
public:
    std::vector<double> position;
    std::vector<double> velocity;
    std::vector<double> acceleration;
    ros::Duration time_from_start;

public:
    States() : position(6), velocity(6), acceleration(6), time_from_start(0.0) {
        
    }
};

struct TimeData
{
    TimeData() : time(0.0), period(0.0), uptime(0.0) {}

    ros::Time     time;   ///< Time of last update cycle
    ros::Duration period; ///< Period of last update cycle
    ros::Time     uptime; ///< Controller uptime. Set to zero at every restart.
};

// double normalize_angle(double angle)
// {
//     const double result = fmod(angle + M_PI, 2.0*M_PI);
//     if(result <= 0.0) return result + M_PI;
//     return result - M_PI;
// }
   
}

