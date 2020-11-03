/**
 * @file publisher.cpp
 * @author Divyam Garg
 * @brief This file publishes the data in string format
 * @version 0.1
 * @date 2020-10-26
 *
 * @copyright Copyright (c) 2020
 *
 */

/**
 * including ros headers
 */
#include <ros/ros.h>
#include <std_msgs/String.h>

#include <sstream>

/**
 * @brief This is the main function where node is created named publisher.
 * @brief It publishes data on chatter topic in the string format
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char **argv) {
  ros::init(argc, argv, "publisher");
  ros::NodeHandle n;
  ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

  ros::Rate loop_rate(10);
  std_msgs::String msg;
  msg.data = "Robots are Awesome";

  while (ros::ok()) {

    chatter_pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}