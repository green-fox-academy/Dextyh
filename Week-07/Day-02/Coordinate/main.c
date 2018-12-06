#include <stdio.h>
#include "coordinate.h"
#include <time.h>
#include <stdlib.h>

int main() {

    srand(time(NULL));

    coordinates_t kordinatafaszombaszomarray[5];

    for (int i = 0; i < sizeof(kordinatafaszombaszomarray) / sizeof(kordinatafaszombaszomarray[0]); ++i) {
        kordinatafaszombaszomarray[i].x = rand();
        kordinatafaszombaszomarray[i].y = rand();
    }

    for (int j = 0; j < sizeof(kordinatafaszombaszomarray) / sizeof(kordinatafaszombaszomarray[0]); ++j) {
        printf("X: %d | Y: %d\n", kordinatafaszombaszomarray[j].x, kordinatafaszombaszomarray[j].y);
    }

    return 0;
}