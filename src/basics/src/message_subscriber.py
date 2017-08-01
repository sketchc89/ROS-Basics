#!/usr/bin/env python

import rospy
from basics.msg import Complex

def callback(msg):
    print('Real: {0}\t Imaginary: {1}'.format(msg.real, msg.imaginary))

rospy.init_node('message_subscriber')
sub = rospy.Subscriber('complex', Complex, callback, queue_size=10)

rospy.spin()
