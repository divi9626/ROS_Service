#include <gtest/gtest.h>
#include <ros/ros.h>
#include <ros/service_client.h>
#include "beginner_tutorials/modifyText.h"
#include "std_msgs/String.h"

/**
 * @brief test existance of service
 */
TEST(testTalkerNode, testIfModifyTextExist) {
    ros::NodeHandle nh;
    auto client = nh.serviceClient<beginner_tutorials::changeBaseString>("newMessage");
    EXPECT_TRUE(client.waitForExistence(ros::Duration(5)));
}
/**
 * @brief  tests if modifyText service replaces default text with user input
 */
TEST(testTalkerNode, testTalkerDefaultMessageUpdate) {
    ros::NodeHandle nh;
    auto client = nh.serviceClient<beginner_tutorials::changeBaseString>("newMessage");
    beginner_tutorials::modifyText::Request request;
    beginner_tutorials::modifyText::Response response;
    request.inputString = "testString";
    client.call(request, response);
    EXPECT_STREQ("testString", response.modifiedString.c_str());
}