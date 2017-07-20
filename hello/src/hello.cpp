/*
 **************************************************************************************
 *       Filename:  hello.cpp
 *    Description:   source file
 *
 *        Version:  1.0
 *        Created:  2017-07-20 15:19:47
 *
 *       Revision:  initial draft;
 **************************************************************************************
 */

#include <ros/ros.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "node_hello");
    ros::NodeHandle nh;
    ROS_INFO("hello, ros\n");
    return 0;
}


/********************************** END **********************************************/

