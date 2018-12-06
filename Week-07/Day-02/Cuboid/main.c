#include <stdio.h>

typedef struct rectangular_cuboid {
    int a;
    int b;
    int c;
} cuboid_t;

int surface(cuboid_t cuboid);
int volume(cuboid_t cuboid);

int main() {

    cuboid_t cuboid1;
    cuboid1.a = 7;
    cuboid1.b = 5;
    cuboid1.c = 9;

    printf("Surface Area: %d | Volume: %d\n", surface(cuboid1), volume(cuboid1));

    return 0;
}

int surface(cuboid_t cuboid)
{
    return 2 * (cuboid.a * cuboid.b + cuboid.a * cuboid.c + cuboid.b * cuboid.c);
}

int volume(cuboid_t cuboid)
{
    return cuboid.a * cuboid.b * cuboid.c;
}