#include "vector.h"
#include "stdlib.h"

vector_t* vector_create()
{
    vector_t* vector = (vector_t*) malloc(sizeof(vector_t));
    vector->elements = (void*) malloc(5 * sizeof(void*));
    vector->capacity = 10;
    vector->size = 0;

    return vector;
}

void free_vector(vector_t* vector)
{
    free(vector->elements);
    free(vector);
}

int get_capacity(vector_t* vector)
{
    return vector->capacity;
}

int get_size(vector_t* vector)
{
    return vector->size;
}

void push_back_vector(vector_t* vector, void* element)
{
    if (vector->capacity == vector->size) {
        realloc(vector->elements, 2 * vector->capacity * sizeof(void*));
        vector->capacity = vector->capacity * 2;
    }
    vector->elements[vector->size] = element;
    (vector->size)++;
}