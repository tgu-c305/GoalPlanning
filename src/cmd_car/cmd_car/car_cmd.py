import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from cmd_car.utils import  int16_to_hex_string_little_endian
from car_msg.msg import CmdMsg
import can  
import time



class Sub_tst(Node):
    def __init__(self,name):
        super().__init__(name)
        self.sub = self.create_subscription(CmdMsg,'cmd_val',self.listener_callback,10)
        self.bus = can.interface.Bus(channel='can0', bustype='socketcan')
        
    def listener_callback(self, msg):                             # 创建回调函数，执行收到话题消息后对数据的处理
        self.get_logger().info('speed : {} angle : {}'.format(msg.velocity,msg.steering) )        # 输出日志信息，提示订阅收到的话题消息
        speed_str = int16_to_hex_string_little_endian(msg.velocity)
        angle_str = int16_to_hex_string_little_endian(msg.steering)
        cmd_str = '0101' + speed_str + angle_str + '0000'
        cmds = bytearray.fromhex(cmd_str)
        message = can.Message(arbitration_id=0x00000001, data=cmds, is_extended_id=False) 
        self.bus.send(message)  
        print("CAN message sent")  


def main(args=None):
    rclpy.init(args=args)
    node = Sub_tst('car_cmd')
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()