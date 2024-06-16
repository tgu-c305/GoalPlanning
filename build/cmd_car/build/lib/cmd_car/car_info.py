import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import can  
import struct

from car_msg.msg import CmdMsg
# from car_msg.msg import CarState

class PubTest(Node):
    def __init__(self, name):
        super().__init__(name)
        self.pub = self.create_publisher(CmdMsg,'car_info',1)  #创建一个发布者，第一个参数是数据类型，第二个参数为话题名称，第三个参数为缓存大小
        self.timer = self.create_timer(0.002,self.timer_callback)#创建定时器，第一个参数代表每0.5秒调用一次，第二个参数为回调函数

        self.bus = can.interface.Bus(channel='can0', bustype='socketcan', bitrate=500000)  






    def timer_callback(self):       #定时器的回调函数，用于话题的发布

        message = self.bus.recv(1.0)

        if message is not None:  
            # print(message)
            message = bytes(message).hex()
            if message[:4] == '0202':
                angle = bytes.fromhex(message[8:12]) 
                angle_16 = struct.unpack('<h', angle)[0] 
                speed = bytes.fromhex(message[4:8])
                speed_16 = struct.unpack('<h', speed)[0]
                result = '{}:{}\n'.format(angle_16,speed_16)
                print('角度:{}:速度{}'.format(angle_16/100,speed_16/1000)) 
                msg = CmdMsg()
                # msg = String()
                msg.velocity = speed_16
                msg.steering = angle_16
                msg.brake = 0
                msg.gears = 0
                msg.led = 'no'

                self.pub.publish(msg)          #发布指定数据类型的话题
                # self.get_logger().info('pubs %s' % msg.data)
def main(args=None):
    rclpy.init(args=args)
    node = PubTest('car_info')
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()