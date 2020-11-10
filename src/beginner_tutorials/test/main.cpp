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
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
