#!/usr/bin/python3
import rospy
import numpy as np
import time
import matplotlib.pyplot as plt
from control_msgs.msg import JointTrajectoryControllerState
import queue

class qwe:
    def __init__(self) -> None:
        rospy.init_node('my_plt_node', anonymous=True)
        sub = rospy.Subscriber("/my_gen3/my_gen3_joint_trajectory_controller/state", JointTrajectoryControllerState, self.plotCallBack)
        self.desired_position_buffer = []#queue.Queue(200)
        self.curr_position_buffer = []
        self.time_buffer = []#queue.Queue(200)
        
        self.downsample_factor = 40
        display_time = 10 # seconds
        self.buffer_size = int(display_time*1000 / self.downsample_factor)
        self.i = 0


    def plotCallBack(self, msg:JointTrajectoryControllerState):
        self.i += 1
        if self.i < self.downsample_factor:
            return
        else:
            self.i = 0

        self.desired_position_buffer.append(msg.desired.positions)
        self.curr_position_buffer.append(msg.actual.positions)
        self.time_buffer.append(msg.header.stamp.to_sec())
        # print(self.time_buffer[-1])

        if(len(self.desired_position_buffer) > self.buffer_size):
            self.desired_position_buffer = self.desired_position_buffer[1:]
        if(len(self.curr_position_buffer) > self.buffer_size):
            self.curr_position_buffer = self.curr_position_buffer[1:]
        if(len(self.time_buffer) > self.buffer_size):
            self.time_buffer = self.time_buffer[1:]


    def run(self):
        time.sleep(0.2)
        fig, axs = plt.subplots(6, 1, sharex='col')#, sharey='row'
        while not rospy.is_shutdown():
            if len(self.time_buffer) < 2:
                plt.pause(0.01)
                continue
            t_desired_position = np.array(self.desired_position_buffer)
            t_curr_position = np.array(self.curr_position_buffer)
            t_time = np.array(self.time_buffer)
            for i in range(6):
                axs[i].plot(t_time, t_desired_position[:, i])
                axs[i].plot(t_time, t_curr_position[:, i])
            
            plt.pause(0.01)
            for i in range(6):
                axs[i].cla()
            

if __name__ == '__main__':
    node = qwe()

    node.run()
