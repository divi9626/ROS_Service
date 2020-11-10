/**
 * @file talkerTest.cpp
 * @brief This node runs ros test
 * @author Divyam Garg 
 * @license MIT 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "beginner_tutorials/changeBaseString.h"
#include "std_msgs/String.h"
#include <gtest/gtest.h>
#include <ros/ros.h>
#include <ros/service_client.h>

/**
 * @brief test existance of service
 */
TEST(testTalkerNode, testIfchangeBaseString) {
  ros::NodeHandle nh;
  auto client = nh.serviceClient<beginner_tutorials::changeBaseString>(
      "changeBaseString");
  EXPECT_TRUE(client.waitForExistence(ros::Duration(2)));
}
/**
 * @brief  tests if changeBaseString service replaces default text with user
 * input
 */
TEST(testTalkerNode, testTalkerDefaultMessageUpdate) {
  ros::NodeHandle nh;
  auto client = nh.serviceClient<beginner_tutorials::changeBaseString>(
      "changeBaseString");
  beginner_tutorials::changeBaseString srv;
  // change input string
  srv.request.inputString = "testString";
  client.call(srv.request, srv.response);
  EXPECT_STREQ("testString", srv.response.newString.c_str());
}
