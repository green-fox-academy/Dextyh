#include "vector.h"
#include <stdlib.h>
#include <stdio.h>

vector_t* vector_create()
{
    vector_t* vector = (vector_t*) malloc(sizeof(vector_t));
    vector->elements = calloc(5, sizeof(void*));
    vector->capacity = 5;
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
        vector->elements = realloc(vector->elements, 2 * vector->capacity * sizeof(void*));
        vector->capacity = vector->capacity * 2;
    }
    vector->elements[vector->size] = element;
    (vector->size)++;
}

void erase_vector(vector_t* vector, int index)
{
    for (int i = 0; i < vector->size - index - 1; ++i) {
        vector->elements[index + i] = vector->elements[index + i + 1];
    }
    (vector->size)--;
}

void erase_last_vector(vector_t* vector)
{
    (vector->size)--;
}

void unique_vector(vector_t* vector)
{
    for (int i = 0; i < vector->size; ++i) {
        void* element = vector->elements[i];
        for (int j = i + 1; j < vector->size; ++j) {
            if (element == vector->elements[j]) {
                erase_vector(vector, j);
                --j;
            }
        }
    }
}

int search_vector(vector_t* vector, void* element)
{
    for (int i = 0; i < vector->size; ++i) {
        if(element == vector->elements[i]) {
            return i;
        }
    }
    return -1;
}

void insert_vector(vector_t* vector, void* element, int index_after)
{
    if (vector->capacity == vector->size) {
        vector->elements = realloc(vector->elements, 2 * vector->capacity * sizeof(void*));
        vector->capacity = vector->capacity * 2;
    }
    for (int i = vector->size; i > index_after; --i) {
        vector->elements[i] = vector->elements[i-1];
    }
    vector->elements[index_after+1] = element;
    (vector->size)++;
}

void insert_end_vector(vector_t* vector, void* element)
{
    if (vector->capacity == vector->size) {
        vector->elements = realloc(vector->elements, 2 * vector->capacity * sizeof(void*));
        vector->capacity = vector->capacity * 2;
    }
    vector->elements[vector->size] = element;
    (vector->size)++;
}

void insert_start_vector(vector_t* vector, void* element)
{
    insert_vector(vector, element, -1);
}

void double_element(vector_t* vector, int index)
{
    vector->elements[index] = (int)vector->elements[index] * 2;
}

void shuffle_element(vector_t* vector, int index)
{
    void* element = vector->elements[index];
    int random = rand() % vector->size;

    vector->elements[index] = vector->elements[random];
    vector->elements[random] = element;
}

void transform(vector_t* vector, void function(vector_t*, int))
{
    for (int i = 0; i < vector->size; ++i) {
        function(vector, i);
    }
}