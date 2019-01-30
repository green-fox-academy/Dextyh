#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include "initial.h"
#include "Detect_Circles.h"

#define NAME "OpenCV"

int main() {
    cv::Mat image = cv::imread("../img/balls12.jpg");

    cv::namedWindow(NAME, cv::WINDOW_AUTOSIZE);

    cv::imshow(NAME, image);
    cv::waitKey();

    cv::Mat circles = detectCircle(image);
    cv::imshow(NAME, circles);
    cv::waitKey();

    return 0;
}
