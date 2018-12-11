#include <stdio.h>
#include <stdlib.h>


int main() {

    int size = 10;
    int *array = 0;
    array = (int *) calloc(size, sizeof(int));

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < size; ++j) {
        printf("%d ", array[j]);
    }

    free(array);

    return 0;
}