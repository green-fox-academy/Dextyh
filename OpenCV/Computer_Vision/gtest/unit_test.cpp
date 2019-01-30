#include <gtest/gtest.h>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include "initial.h"
#include "Detect_Circles.h"

TEST(test_check, test_cuccok)
{
    EXPECT_EQ(initialFunction(1, 1), 2);
}
