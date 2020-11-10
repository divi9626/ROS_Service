Beginner_tutorials

[![License MIT](https://img.shields.io/badge/License-MIT-brightgreen.svg)](https://github.com/divi9626/beginner_tutorials/blob/master/LICENSE)

###
 This project is basic implementation of interfacing of publisher and suscriber node programmed in c++.Melodic version is used.
 The dependecies given while building package are:
 1) roscpp
 2) rospy
 3) std_msgs
 
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
