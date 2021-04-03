#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "while_node");
  ros::NodeHandle nh;

  int box_1 = 0;

  while (box_1 < 10)
  {
    ROS_INFO("Hello world!");
    box_1++;}

  return 0;
}

