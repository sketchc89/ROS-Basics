#! /usr/bin/env python
import time
import rospy
import actionlib
from basics.msg import TimerAction, TimerGoal, TimerResult

def feedback_cb(feedback):
    '''Print state of timer'''
    print('[Feedback] Time elapsed: {0}'.format(feedback.time_elapsed.to_sec()))
    print('[Feedback] Time remaining: {0}'.format(feedback.time_elapsed.to_sec()))

rospy.init_node('timer_action_client')
client = actionlib.SimpleActionClient('timer', TimerAction)
client.wait_for_server()

goal = TimerGoal()
goal.time_to_wait = rospy.Duration.from_sec(5.0)
client.send_goal(goal)
# Test preemption
# time.sleep(3.)
# client.cancel_goal()
client.wait_for_result()

print('[Result] State: {0}'.format(client.get_state()))
print('[Result] Status: {0}'.format(client.get_goal_status_text()))
print('[Result] Time elapsed: {0}'.format(client.get_result().time_elapsed.to_sec()))
print('[Result] Updates sent: {0}'.format(client.get_result().updates_sent))
