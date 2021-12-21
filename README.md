# my_kinova_controllers

Initially, this project was created as my Robot Control course final project. It is a practical implementation of ROS controller of Kinova Gen3 in Gazebo simulation environment. It took advantage of the dynamics model of the robot manipulator and thus apply a feedback linearization control method. 

## Interface

Action is not supported so far, use topic commands(trajectory_msgs/JointTrajectory).

## Visualize the Results

`plot_states.py` recieves states messages from the controller and draws desired and actual trajectory of robot joints.

