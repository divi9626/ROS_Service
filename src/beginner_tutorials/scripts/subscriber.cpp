/**
 * @file suscriber.cpp
 * @author Divyam Garg
 * @brief
 * @version 0.1
 * @date 2020-10-24
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <ros/ros.h>
#include <std_msgs/String.h>

/**
 * @brief This function is a call back function which is called in suscriber
 *
 * @param msg
 */
void chatterCallback(const std_msgs::String::ConstPtr &msg) {
  ROS_INFO("While listening to publisher I heard: [%s]", msg->data.c_str());
}
/**
 * @brief main function which initialises suscriber node and suscribes to
 * published data
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char **argv) {

  ros::init(argc, argv, "subscriber");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);
  ros::spin();

  return 0;
}