#include <stdio.h>
#include <stdlib.h>

int main() {

    int size = 10;
    int* array = calloc(10, sizeof(int));

    int number = 2;

    for (int i = 0; i < size; ++i) {
        array[i] = number;
        number += 2;
    }

    for (int j = 0; j < size; ++j) {
        printf("%d ", array[j]);
    }

    realloc(array, 0);

    return 0;
}