#!/usr/bin/env python
import sys, rospy
from basics.srv import WordCount

rospy.init_node('service_client')
rospy.wait_for_service('word_count')
word_counter = rospy.ServiceProxy('word_count', WordCount)
words = ' '.join(sys.argv[1:])
word_count = word_counter(words)
print('{0} -> {1}'.format(words, word_count.count))
