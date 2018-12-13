#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main() {


    vector_t* vector = vector_create();

    int number = 10;
    for (int i = 0; i < 10; ++i) {
        push_back_vector(vector, (void*) number);
        number += 10;
    }

    printf("Capacity of the vector: %d\n",get_capacity(vector));
    printf("Size of the vector: %d\n",get_size(vector));

    for (int j = 0; j < get_size(vector); ++j) {
        printf("%d\n", (int)vector->elements[j]);
    }

    free_vector(vector);

    return 0;
}