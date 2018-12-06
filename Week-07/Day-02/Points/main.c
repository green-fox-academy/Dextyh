#include <stdio.h>
#include "point.h"

int main() {

    point_t point1 = construct(5, 10);
    point_t point2 = construct(16, 7);
    point_t point3 = construct(8, 8);

    printf("Distance: %lf\n", distance(point1, point2));

    return 0;
}