#include "point.h"
#include <math.h>

point_t construct(float x, float y)
{
    point_t point;
    point.x = x;
    point.y = y;

    return point;
}

float distance(point_t point1, point_t point2)
{
    float number = (point2.x - point1.x) * (point2.x - point1.x) + (point2.y - point1.y) * (point2.y - point1.y);

    return sqrtf(number);
}