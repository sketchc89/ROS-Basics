#!/usr/bin/env python
import rospy
import numpy as np
from geometry_msgs.msg import Twist
from std_msgs.msg import Float32
from sensor_msgs.msg import LaserScan

'''Drive forward for 30s or until the robot is  within 0.8m of an object,
   then spin for 5s to change direction. '''
def scan_callback(msg):
    global g_range_ahead
    g_range_ahead = np.nanmin(msg.ranges)

g_range_ahead = 1
scan_sub = rospy.Subscriber('scan', LaserScan, scan_callback)
cmd_vel_pub = rospy.Publisher('cmd_vel', Twist, queue_size=1)
range_pub = rospy.Publisher('range_ahead', Float32, queue_size=1) 
rospy.init_node('wander')
state_change_time = rospy.Time.now()
driving_forward = True
rate = rospy.Rate(10)

while not rospy.is_shutdown():
    print('Range ahead {0:.1f}'.format(g_range_ahead))
    if driving_forward:
        if (g_range_ahead < 0.8 or rospy.Time.now() > state_change_time):
            driving_forward = False
            state_change_time = rospy.Time.now() + rospy.Duration(5)
    else:
        if rospy.Time.now() > state_change_time:
            driving_forward = True
            state_change_time = rospy.Time.now() + rospy.Duration(30)
    twist = Twist()
    if driving_forward:
        twist.linear.x = 0.25
    else:
        twist.angular.z = 0.25
    cmd_vel_pub.publish(twist)
    range_pub.publish(g_range_ahead)
    rate.sleep()

