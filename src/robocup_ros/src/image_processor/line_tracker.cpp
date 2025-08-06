#include "robocup_ros/image_processor/line_tracker.hpp"

#include <vector>
#include <cmath>

cv::Mat robocup::convert_to_hsv(const cv::Mat &src_image)
{
    cv::Mat dst_image;
    cv::cvtColor(src_image, dst_image, cv::COLOR_BGR2HSV);
    return dst_image;
}

cv::Mat robocup::convert_to_gray(const cv::Mat &src_image)
{
    cv::Mat dst_image;
    cv::cvtColor(src_image, dst_image, cv::COLOR_BGR2GRAY);
    return dst_image;
}

cv::Mat robocup::threshold_hsv(const cv::Mat &src_image, 
                               const int &h_min, const int &s_min, const int &v_min,
                               const int &h_max, const int &s_max, const int &v_max)
{
    cv::Mat dst_image;
    cv::inRange(src_image, 
                cv::Scalar(h_min, s_min, v_min), 
                cv::Scalar(h_max, s_max, v_max),
                dst_image);
    return dst_image;
}

cv::Mat robocup::erode_binary_image(const cv::Mat &src_image, const int erosion_size)
{
    cv::Mat dst_image;
    cv::Mat erosion_element = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(erosion_size, erosion_size));
    cv::erode(src_image, dst_image, erosion_element);
    return dst_image;
}