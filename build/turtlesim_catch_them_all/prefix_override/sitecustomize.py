import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/poom/Desktop/ros2_Turtlesim_CatchThemAll_ws/install/turtlesim_catch_them_all'
