#include <gtest/gtest.h>
#include <ros/ros.h>
#include <ros/service_client.h>
#include "beginner_tutorials/changeBaseString.h"
#include "std_msgs/String.h"

ros::NodeHandle nh;
auto client = nh.serviceClient<beginner_tutorials::changeBaseString>("changeBaseString");
/**
 * @brief test existance of service
 */
TEST(testTalkerNode, testIfchangeBaseString) {
    EXPECT_TRUE(client.waitForExistence(ros::Duration(2)));
}
/**
 * @brief  tests if changeBaseString service replaces default text with user input
 */
TEST(testTalkerNode, testTalkerDefaultMessageUpdate) {
    beginner_tutorials::changeBaseString srv;
    // change input string
    srv.request.inputString = "testString";
    client.call(srv.request, srv.response);
    EXPECT_STREQ("testString", srv.response.newString.c_str());
}