Beginner_tutorials

[![License MIT](https://img.shields.io/badge/License-MIT-brightgreen.svg)](https://github.com/divi9626/beginner_tutorials/blob/master/LICENSE)

###
 This project is basic implementation of interfacing of publisher and suscriber node programmed in c++.Melodic version is used.
 The dependecies given while building package are:
 1) roscpp
 2) rospy
 3) std_msgs
 4) message_generations
 5) genmsg
 6) tf
 
###To download the project:
'''
git clone https://github.com/divi9626/beginner_tutorials
catkin_make
.source devel/setup.bash
'''

###To run publisher and suscriber nodes:

1) rosrun begginer_tutorials publisher
2) rosrun begginer_tutorials suscriber 

### to run publisher and subscriber at once 
'''
roslaunch beginner_tutorials nodes.launch my_rate:=<desired frequency>
'''

### to run rosservice
'''
rosservice call /changeBaseString "<text>"

### to check logging
'''
rqt_console
'''

### to check tf
''' 
roslaunch beginner_tutorials nodes.launch
rosrun tf tf_echo /world_frame /my_frame

rosrun rqt_tf_tree rqt_tf_tree
'''

### to check ros tests
''' 
cd <workspace>
catkin_make run_tests_beginner_tutorials
Images of output in result folder
'''

### to record rosbag
'''
source /devel/setup.bash
roslaunch beginner_tutorials nodes.launch
rosrun beginner_tutorials listener
cd <workspace>/src/beginner_tutorials/results
rosbag record -a
Rename the .bag file to rosbagg.bag
'''

### to play rosbag
'''
cd <workspace>/src/beginner_tutorials/results
rosbag play rosbagg.bag
rosbag info rosbagg.bag
'''
