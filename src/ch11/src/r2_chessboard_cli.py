#!/usr/bin/env python
import sys, rospy, tf, moveit_commander, random
from geometry_msgs.msg import Pose, Point, Quaternion

class R2ChessboardWrapper:
    def __init__(self):
        self.left_arm = moveit_commander.MoveGroupCommander('left_arm')
    def set_pose(self, x, y, z, phi, theta, psi):
        '''Given an arm and pose coords, move left arm w/ moveit'''
        orient = Quaternion(*tf.transformations.quaternion_from_euler(phi, theta, psi))
        pose = Pose(Point(x, y, z), orient)
        self.left_arm.set_pose_target(pose)
        self.left_arm.go(True)

    def set_square(self, square, height_above_board):
        if len(square) != 2 or not square[1].isdigit():
            raise ValueError(
                    'Expected a chess rank and file like "b3" but found {0} instead'.format(square))
        rank_y = -0.6 - 0.05*(ord(square[0]) - ord('a'))
        file_x = 0.8 - 0.05*int(square[1])
        z = float(height_above_board) + 1.0
        print('Rank {0} File {1}'.format(rank_y, file_x))
        self.set_pose(file_x, rank_y, z, 3.14, 0.3, -1.57)

if __name__ == '__main__':
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('r2_chessboard_cli')
    argv = rospy.myargv(argv=sys.argv)
    if len(argv) != 3:
        print('Usage: r2_chessboard.py square(b3) height(m)')
        sys.exit(1)
    r2w = R2ChessboardWrapper()
    r2w.set_square(*argv[1:])
    moveit_commander.roscpp_shutdown()
