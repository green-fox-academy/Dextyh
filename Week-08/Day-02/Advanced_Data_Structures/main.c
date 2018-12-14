#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include <time.h>

int main() {

    srand(time(NULL));

    vector_t* vector = vector_create();

    int number = 10;
    for (int i = 0; i < 6; ++i) {
        push_back_vector(vector, (void*) number);
        push_back_vector(vector, (void*) 20);
        number += 10;
    }

    // transform(vector, double_element);
    // transform(vector, shuffle_element);

    erase_vector(vector, 2);
    erase_last_vector(vector);

    unique_vector(vector);
    insert_vector(vector, (void*)100, 3);
    insert_end_vector(vector, (void*)500);
    insert_start_vector(vector, (void*)230);

    for (int j = 0; j < get_size(vector); ++j) {
        int counter = j + 1;
        printf("%d. Element: %d\n", counter, (int)vector->elements[j]);
    }

    printf("\nCapacity of the vector: %d\n",get_capacity(vector));
    printf("Size of the vector: %d\n\n",get_size(vector));

    printf("%d\n", search_vector(vector, (void*) 40));


    free_vector(vector);

    return 0;
}