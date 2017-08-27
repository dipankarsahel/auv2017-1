#include <ros/ros.h>

#include <image_transport/image_transport.h>

#include <opencv2/highgui/highgui.hpp>

#include <cv_bridge/cv_bridge.h>

#include <sstream>

#include <camera_info_manager/camera_info_manager.h>

#include "std_msgs/Float64MultiArray.h"

#include "std_msgs/Float64MultiArray.h"

#include "std_msgs/Float64MultiArray.h"

#include "sensor_msgs/CameraInfo.h"

#include "sensor_msgs/Image.h"

#include "stereo_msgs/DisparityImage.h"

#include "sensor_msgs/PointCloud2.h"
#include <image_transport/image_transport.h>

#include <opencv2/highgui/highgui.hpp>
 #include <cv_bridge/cv_bridge.h>



   void left_mono(const sensor_msgs::ImageConstPtr& msg){
 
}

   void right_mono(const sensor_msgs::ImageConstPtr& msg){



}

   void left_image_color(const sensor_msgs::ImageConstPtr& msg){
 
}

   void right_image_color(const sensor_msgs::ImageConstPtr& msg){
 

}

   void rectified_left(const sensor_msgs::ImageConstPtr& msg){

 
}

   void rectified_right(const sensor_msgs::ImageConstPtr& msg){




}

   void rectified_left_color(const sensor_msgs::ImageConstPtr& msg){
 

}

   void rectified_right_color(const sensor_msgs::ImageConstPtr& msg){



}

   void disparity_image(const stereo_msgs::DisparityImage msg){




}

   void point_cloud2(const sensor_msgs::PointCloud2 msg){




}



   int main(int argc, char **argv)

   {

     ros::init(argc, argv, "subscriber");

  

     ros::NodeHandle n;

     image_transport::ImageTransport it(n);

     

    image_transport::Subscriber sub = it.subscribe("/stereo/left/image_rect", 1000, rectified_left);

     image_transport::Subscriber sub1 = it.subscribe("/stereo/right/image_rect", 1000, rectified_right);

     image_transport::Subscriber sub2 = it.subscribe("/stereo/left/image_rect_color", 1000, rectified_left_color);

     image_transport::Subscriber sub3 = it.subscribe("/stereo/right/image_rect_color", 1000, rectified_right_color);

     ros::Subscriber sub4 = n.subscribe("/stereo/disparity", 1000, disparity_image);

     ros::Subscriber sub5 = n.subscribe("/stereo/points2", 1000, point_cloud2);

     image_transport::Subscriber sub6 = it.subscribe("/stereo/left/image_mono", 1000, left_mono);

     image_transport::Subscriber sub7 = it.subscribe("/stereo/right/image_mono", 1000, right_mono);

     image_transport::Subscriber sub8 = it.subscribe("/stereo/left/image_color", 1000, left_image_color);

     image_transport::Subscriber sub9 = it.subscribe("/stereo/right/image_color", 1000, right_image_color);

    

 

     ros::spin();

  

     return 0;

   }


