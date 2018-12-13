#ifndef ADVANCED_DATA_STRUCTURES_VECTOR_H
#define ADVANCED_DATA_STRUCTURES_VECTOR_H

typedef struct vector {

    int capacity;
    int size;
    void** elements;


} vector_t;

vector_t* vector_create();
void free_vector(vector_t* vector);

int get_capacity(vector_t* vector);
int get_size(vector_t* vector);

void push_back_vector(vector_t* vector, void* element);

#endif
