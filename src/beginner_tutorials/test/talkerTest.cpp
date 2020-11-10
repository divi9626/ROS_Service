#include <gtest/gtest.h>
#include <ros/ros.h>
#include <ros/service_client.h>
#include "beginner_tutorials/changeBaseString.h"
#include "std_msgs/String.h"

/**
 * @brief test existance of service
 */
TEST(testTalkerNode, testIfchangeBaseString) {
    ros::NodeHandle nh;
    auto client = nh.serviceClient<beginner_tutorials::changeBaseString>("changeBaseString");
    EXPECT_TRUE(client.waitForExistence(ros::Duration(1)));
}
/**
 * @brief  tests if changeBaseString service replaces default text with user input
 */
/*TEST(testTalkerNode, testTalkerDefaultMessageUpdate) {
    ros::NodeHandle nh;
    auto client = nh.serviceClient<beginner_tutorials::changeBaseString>("newMessage");
    beginner_tutorials::changeBaseString::Request request;
    beginner_tutorials::changeBaseString::Response response;
    request.inputString = "testString";
    client.call(request, response);
    EXPECT_STREQ("testString", response.modifiedString.c_str());
}*/