import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class PubTest(Node):
    def __init__(self, name):
        super().__init__(name)
        self.pub = self.create_publisher(String,'chatter',10)  #创建一个发布者，第一个参数是数据类型，第二个参数为话题名称，第三个参数为缓存大小
        self.timer = self.create_timer(0.5,self.timer_callback)#创建定时器，第一个参数代表每0.5秒调用一次，第二个参数为回调函数
    def timer_callback(self):       #定时器的回调函数，用于话题的发布
        msg = String()
        msg.data = 'hello word'
        self.pub.publish(msg)          #发布指定数据类型的话题
        self.get_logger().info('pubs %s' % msg.data)
def main(args=None):
    rclpy.init(args=args)
    node = PubTest('pub_test')
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()