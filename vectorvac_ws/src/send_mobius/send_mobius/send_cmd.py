import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile
import socket
from _thread import *
import time
import json

HOST = 'ncube'
PORT = 3106
NAME = (HOST,PORT)
client_sockets = []

print('>> Server Start')

clientSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
clientSocket.connect(NAME)



class SendData(Node):
    def __init__(self):
        super().__init__('cmdSub')
        qos_profile = QoSProfile(depth=10)
        self.linear_x = 0.0000
        self.linear_y = 0.0000
        self.linear_z = 0.0000

        self.angular_x = 0.0000
        self.angular_y = 0.0000
        self.angular_z = 0.0000
        
        self.subnode = self.create_subscription(
            Twist,
            'cmd_vel',
            self.listener_callback,
            qos_profile
        )

    def listener_callback(self, msg):
        self.linear_x = msg.linear.x
        self.linear_y = msg.linear.y
        self.linear_z = msg.linear.z

        self.angular_x = msg.angular.x
        self.angular_y = msg.angular.y
        self.angular_z = msg.angular.z

        self.get_logger().info('-------------------------------------------')
        self.get_logger().info('Subscribed linear_x: {0}'.format(self.linear_x))
        self.get_logger().info('Subscribed linear_y: {0}'.format(self.linear_y))
        self.get_logger().info('Subscribed linear_z: {0}'.format(self.linear_z))
        self.get_logger().info('Subscribed angular_x: {0}'.format(self.angular_x))
        self.get_logger().info('Subscribed angular_y: {0}'.format(self.angular_y))
        self.get_logger().info('Subscribed angular_z: {0}'.format(self.angular_z))
        self.get_logger().info('-------------------------------------------')


        ## mobius socket client
        triggerData = '{"ctname": "time", "con": "hello"}' + '<EOF>'
        clientSocket.send(triggerData.encode('utf-8'))
        clientSocket.recv(100) #ack
        print("cnt connect")

        # dict_angular_x = {
        #     'ctname': 'angular_x',
        #     'con': str(self.angular_x)
        # }
        # dict_angular_y = {
        #     'ctname': 'angular_y',
        #     'con': str(self.angular_y)
        # }
        # dict_angular_z = {
        #     'ctname': 'angular_z',
        #     'con': str(self.angular_z)
        # }
        # dict_linear_x = {
        #     'ctname': 'linear_x',
        #     'con': str(self.linear_x)
        # }
        # dict_linear_y = {
        #     'ctname': 'linear_y',
        #     'con': str(self.linear)
        # }
        # dict_linear_z = {
        #     'ctname': 'linear_z',
        #     'con': str(self.linear)
        # }
        
        cnt_angular_x = '{"ctname": "angular_x", "con": '+'\"'+str(self.angular_x)+'\"'+'}' + '<EOF>'
        cnt_angular_y = '{"ctname": "angular_y", "con": '+'\"'+str(self.angular_y)+'\"'+'}' + '<EOF>'
        cnt_angular_z = '{"ctname": "angular_z", "con": '+'\"'+str(self.angular_z)+'\"'+'}' + '<EOF>'

        cnt_linear_x = '{"ctname": "linear_x", "con": '+'\"'+str(self.linear_x)+'\"'+'}' + '<EOF>'
        cnt_linear_y = '{"ctname": "linear_y", "con": '+'\"'+str(self.linear_y)+'\"'+'}' + '<EOF>'
        cnt_linear_z = '{"ctname": "linear_z", "con": '+'\"'+str(self.linear_z)+'\"'+'}' + '<EOF>'

        clientSocket.send(cnt_angular_x.encode('utf-8'))
        clientSocket.send(cnt_angular_y.encode('utf-8'))
        clientSocket.send(cnt_angular_z.encode('utf-8'))
        clientSocket.send(cnt_linear_x.encode('utf-8'))
        clientSocket.send(cnt_linear_y.encode('utf-8'))
        clientSocket.send(cnt_linear_z.encode('utf-8'))


def main(args=None):
    rclpy.init(args=args)
    node = SendData()
    try:
        rclpy.spin(node)

    except KeyboardInterrupt:
        node.get_logger().info("keyboard interrupt")
        clientSocket.close()
        clientSocket.shutdown(1)
    
    finally:
        node.destroy_node()
        rclpy.shutdown()
        clientSocket.close()
        clientSocket.shutdown(1)
    

if __name__ == "__main__":
    main()



