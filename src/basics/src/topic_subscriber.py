#!/usr/bin/env python

import rospy
from std_msgs.msg import Int32

def callback(msg):
    print('The square of {0} is {1}'.format(msg.data, msg.data**2))

rospy.init_node('topic_subscriber')
sub = rospy.Subscriber('counter', Int32, callback)
rospy.spin()
