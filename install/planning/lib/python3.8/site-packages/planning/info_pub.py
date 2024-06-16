#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
import time
from car_msg.msg import CmdMsg
from car_msg.msg import CarState
from imu_msgs.msg import Imu
from imu_msgs.msg import Gnss
import numpy as np
import math
import time

#重新录制路径以后更改这里的txt路径
PathFile = "/home/nvidia/GoalPlanning/src/location/src/location/src/data/Square.txt"

class VehicleState:

    def __init__(self, x=0.0, y=0.0, yaw=0.0, v=0.0):
        self.x = x
        self.y = y
        self.yaw = yaw
        self.v = v

class ImuState:

    def __init__(self, roll=0.0, pitch=0.0, yaw=0.0):
        self.roll = roll
        self.pitch = pitch
        self.yaw = yaw

class GnssState:

    def __init__(self, east=0.0, north=0.0, up=0.0):
        self.east=east
        self.north=north
        self.up=up



class PubNode(Node):
    def __init__(self, name):
        super().__init__(name)
        # 设置最大速度，最大转向角,刹车力度
        self.velocity_max = 100   # 速度
        self.steering_max = 100   # 转向角
        self.brake_max = 100    # 刹车力度

        # 初始化车辆控制信息
        self.k = 0.1  # 前视距离系数
        self.Lfc = 2.0  # 前视距离
        self.Kp = 1.0  # 速度P控制器系数
        self.dt = 0.1  # 时间间隔，单位：s
        self.L = 2.9  # 车辆轴距，单位：m

        #定位结果
        self.CurrentEastPos = 0.0
        self.CurrentNorthPos = 0.0
        self.CurrentUpPos = 0.0

        #预瞄指针，控制预瞄点的移动, 移动到下一个预瞄点后，指针向后移动
        self.PurSuitPtr = 1

        # 先订阅数据
        self.pub = Node.create_publisher(self, CmdMsg, "planning_cmd_msg", 10)
        self.sub = Node.create_subscription(self, CarState, "planning_state_msg",self.timeBacker , 10)
        self.sub_imuMsg = Node.create_subscription(self, Imu, "Imu_Pub",self.imudata_timeBacker , 10)
        self.sub_GnssMsg = Node.create_subscription(self, Gnss, "Gnss_Pub",self.Gnssdata_timeBacker , 10)
        


    def process(self):
        self.car_msg = CmdMsg()
        # 添加算法调用地方
        # >>>>>>>>start>>>>>>>>
        
        # #打印当前点与预瞄点的距离差
        # print("当前点与预瞄点东向距离差: ", self.CurrentEastPos - GlobalENUPurSuitPoint[PurSuitPtr][0])
        # print("当前点与预瞄点北向距离差: ", self.CurrentNorthPos - GlobalENUPurSuitPoint[PurSuitPtr][1])
        # print("当前点与预瞄点地表向距离差: ", self.CurrentUpPos - GlobalENUPurSuitPoint[PurSuitPtr][2])
        #距离差之和
        while(self.CurrentEastPos == 0):
            pass
        PurDistdiff = abs(self.CurrentEastPos - GlobalENUPurSuitPoint[PurSuitPtr][0]) +\
        abs(self.CurrentNorthPos - GlobalENUPurSuitPoint[PurSuitPtr][1])
        if (PurDistdiff < 3):
            PurSuitPtr += 1
        

        self.pure_pursuit()
        # <<<<<<<<stop<<<<<<<<
        self.pub.publish(self.car_msg)
        
        self.logger_print()
    
    def timeBacker(self, state_msg):
        # 解析接收到的数据,获取车的初始状态
        self.state = VehicleState()
        self.state.x = state_msg.x
        self.state.y = state_msg.y
        self.state.yaw = state_msg.yaw
        self.state.v = state_msg.v
        # 然后调用process函数处理，然后将处理结果发送至下一节点
        self.process()

    def imudata_timeBacker(self, imuMsg):
        self.state = ImuState()
        self.state.roll = imuMsg.imu_msg.roll
        self.state.pitch = imuMsg.imu_msg.pitch
        self.state.yaw = imuMsg.imu_msg.azimuth
        # print("self.state.yaw: ", self.state.yaw)



    def Gnssdata_timeBacker(self, GnssMsg):

        '''
        这里仅仅添加了几个变量，具体需要用到哪个变量需要看Gnss.msg文件中的定义
        比如说float64 gnss_lon  代表经度
        '''
        # self.state = GnssState()
        # self.state.east = GnssMsg.pos_east
        # self.state.north = GnssMsg.pos_north
        # self.state.up = GnssMsg.pos_up
        self.CurrentEastPos = GnssMsg.pos_east
        self.CurrentNorthPos = GnssMsg.pos_north
        self.CurrentUpPos = GnssMsg.pos_up
        print("东向移动距离：", self.CurrentEastPos - EastPos[0])
        print("北向移动距离：", self.CurrentNorthPos - NorthPos[0])
        print("地表方向移动距离：", self.CurrentUpPos - UpPos[0])

        #print("self.state.east: ", self.state.east)    


    def logger_print(self):
        self.get_logger().info("send msg:-------")
        self.get_logger().info("-car_mag.velocity: %d" % self.car_msg.velocity)
        self.get_logger().info("-car_mag.steering: %d" % self.car_msg.steering)
        self.get_logger().info("-car_mag.brake: %d" % self.car_msg.brake)
        self.get_logger().info("-car_mag.gears: %d" % self.car_msg.gears)
        self.get_logger().info("-car_mag.led: %s" % self.car_msg.led)

    
    def set_next_posion_speed(self):
        self.velocity = 10.0/3.6  # [m/s]

    def pure_pursuit(self):
        # 获得下一目标点信息
        self.get_next_target()

        # 控制车的速速和加速度
        # >>>>>>>>start>>>>>>>>
        # 设置车辆下一时间的速度
        self.set_next_posion_speed()
        # 通过目标速度预测加速度
        self.PControl()
        # <<<<<<<<stop<<<<<<<<
        
        # 定义了pure_pursuit_control函数，实现纯追踪控制。
        # 计算目标路点，计算从车辆当前位置到目标路点的角度alpha，然后根据车辆的前视距离和轴距计算阿克曼转角delta
        self.pure_pursuit_control()

        self.car_msg.velocity = (self.velocity/self.velocity_max)*2000   # 速度
        self.car_msg.steering = (self.akm_delta/self.steering_max)*2000   # 转向角
        self.car_msg.brake = (100/self.brake_max)*2000      # 刹车力度
        self.car_msg.gears = 1      # 档位
        self.car_msg.led = "hello world" # 呼吸灯

    def get_next_target(self):
        self.target_x = 100
        self.target_y = 100

    def PControl(self):
        self.a = self.Kp * (self.velocity - self.state.v)

    def pure_pursuit_control(self): 

        tx = self.target_x
        ty = self.target_y
        alpha = math.atan2(ty - self.state.y, tx - self.state.x) - self.state.yaw

        # if state.v < 0:  # back
        #     alpha = math.pi - alpha

        Lf = self.k * self.state.v + self.Lfc

        self.akm_delta = math.atan2(2.0 * self.L * math.sin(alpha) / Lf, 1.0)

# 读取录制的数据
# 初始化坐标列表
EastPos = []
NorthPos = []
UpPos = []
GlobalENUPurSuitPoint = []
def readENUPosition(filename):
    with open(filename, 'r') as file:
        lines = file.readlines()  # 读取所有行到一个列表

    # 解析每一行数据，每50个点往全局预瞄点中添加数据
    for i, line in enumerate(lines):  # 使用enumerate获取行号
        parts = line.split()  # 以空格分割每一行
        if len(parts) >= 3:  # 确保行中有足够的数据
            x, y, z = float(parts[0]), float(parts[1]), float(parts[2])  # 将字符串转换为浮点数
            EastPos.append(x)
            NorthPos.append(y)
            UpPos.append(z)
            
            # 每50个点，将当前点添加到GlobalENUPurSuitPoint列表
            if (i + 1) % 50 == 0:  
                GlobalENUPurSuitPoint.append((x, y, z))


def main(args=None):
    rclpy.init(args=args)
    readENUPosition(PathFile)

    node = PubNode("planning_node")

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()