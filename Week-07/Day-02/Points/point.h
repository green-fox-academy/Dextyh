#ifndef POINTS_POINT_H
#define POINTS_POINT_H

typedef struct point {

    float x;
    float y;

} point_t;

point_t construct(float x, float y);
float distance(point_t point1, point_t point2);

#endif
