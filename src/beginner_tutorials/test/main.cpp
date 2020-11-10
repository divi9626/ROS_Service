/**
 * @file main.cpp
 * @brief This files runs all the tests
 * @author Divyam Garg 
 * @license MIT 
 * @version 0.1
 * @date 2020-11-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <ros/ros.h>
#include <gtest/gtest.h>

/**
 * @brief  main function for calling tests
 * @param  argc int
 * @param  argv character array
 * @return 0 on successful exit
 */

int main(int argc, char** argv) {
    ros::init(argc, argv, "talkerTest");
    testing::InitGoogleTest(&argc, argv);
    ros::NodeHandle nh;
    return RUN_ALL_TESTS();
}
