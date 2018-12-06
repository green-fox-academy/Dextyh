#include <stdio.h>

#define PI 3.14

int circle_area(int r);

int main() {

    printf("Area of the circle: %d", circle_area(10));

    return 0;
}

int circle_area(int r)
{
    return r * r * PI;
}