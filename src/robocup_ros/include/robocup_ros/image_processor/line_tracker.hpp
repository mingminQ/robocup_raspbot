#ifndef ROBOCUP_ROS_IMAGE_PROCESSOR_LINE_TRACKER_HPP_
#define ROBOCUP_ROS_IMAGE_PROCESSOR_LINE_TRACKER_HPP_

#include "opencv2/opencv.hpp"

namespace robocup
{
    cv::Mat convert_to_hsv(const cv::Mat &src_image);

    cv::Mat convert_to_gray(const cv::Mat &src_image);

    cv::Mat threshold_hsv(const cv::Mat &src_image, 
                          const int &h_min, const int &s_min, const int &v_min,
                          const int &h_max, const int &s_max, const int &v_max);

    cv::Mat erode_binary_image(const cv::Mat &src_image, const int erosion_size);

} // namespace robocup

#endif // ROBOCUP_ROS_IMAGE_PROCESSOR_LINE_TRACKER_HPP_