#include <iostream>
#include <stdio.h>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <sqlite3.h>

#define PI 3.14159265
#define NAME "OpenCV"
#define SCREEN_SIZE 600
int halfScreen = SCREEN_SIZE / 2;

enum location {
    TOP_RIGHT,
    TOP_LEFT,
    BOTTOM_LEFT,
    BOTTOM_RIGHT
};

cv::Mat screen = cv::Mat::zeros(SCREEN_SIZE, SCREEN_SIZE, CV_8UC3);
cv::Point point;

void initMouse(int event, int x, int y, int flags, void* userdata);
void centerCircle(cv::Mat screen, cv::Point center);
void line(cv::Mat screen, cv::Point start, cv::Point end);
double getAngle(cv::Point point);

int main() {

    cv::namedWindow(NAME, cv::WINDOW_AUTOSIZE);
    cv::setMouseCallback(NAME, initMouse, nullptr);
    centerCircle(screen, cv::Point(halfScreen,halfScreen));
    line(screen, cv::Point(halfScreen, halfScreen), cv::Point(SCREEN_SIZE, halfScreen));
    cv::imshow(NAME, screen);
    cv::waitKey(0);

    return 0;
}

void initMouse(int event, int x, int y, int flags, void* userdata)
{
    point = cv::Point(x, y);

    if  ( event == cv::EVENT_LBUTTONDOWN )
    {
        std::cout << std::endl << "Left Click (" << point.x << ", " << point.y << ")" << std::endl;
        line(screen, cv::Point(halfScreen, halfScreen), cv::Point(point.x, point.y));
        cv::imshow(NAME, screen);
        std::cout << getAngle(point) << std::endl;
    }
    else if  ( event == cv::EVENT_RBUTTONDOWN )
    {
        std::cout << std::endl << "Right Click (" << point.x << ", " << point.y << ")" << std::endl;
    }
}

void centerCircle(cv::Mat screen, cv::Point center)
{
    cv::circle(screen, center, 5, cv::Scalar(0, 0, 255), 10, cv::LINE_8);

}

void line(cv::Mat screen, cv::Point start, cv::Point end)
{
    cv::line(screen, start, end, cv::Scalar(0, 0, 255), 3, cv::LINE_8);
}

double getAngle(cv::Point point)
{
    int a = 0;
    int b = 0;
    location location;

    if (point.x >= halfScreen && point.y <= halfScreen) {
        a = point.x - halfScreen;
        b = halfScreen - point.y;
        location = TOP_RIGHT;

    } else if (point.x <= halfScreen && point.y <= halfScreen) {
        a = halfScreen - point.x;
        b = halfScreen - point.y;
        location = TOP_LEFT;

    } else if (point.x <= halfScreen && point.y >= halfScreen) {
        a = halfScreen - point.x;
        b = point.y - halfScreen;
        location = BOTTOM_LEFT;

    } else if (point.x >= halfScreen && point.y >= halfScreen) {
        a = point.x - halfScreen;
        b = point.y - halfScreen;
        location = BOTTOM_RIGHT;
    }

    double c = sqrt((double) a * (double) a + (double) b * (double) b);
    double angle = asin(b / c) * 180 / PI;

    std::cout << "a = " << a << std::endl
              << "b = " << b << std::endl
              << "c = " << c << std::endl
              << "Angle: ";

    switch (location) {
        case TOP_RIGHT:
            return angle;
        case TOP_LEFT:
            return 180 - angle;
        case BOTTOM_LEFT:
            return 180 + angle;
        case BOTTOM_RIGHT:
            return 360 - angle;
    }

    return 0;
}