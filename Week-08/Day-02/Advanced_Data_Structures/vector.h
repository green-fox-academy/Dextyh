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
void erase_vector(vector_t* vector, int index);
void erase_last_vector(vector_t* vector);
void unique_vector(vector_t* vector);
int search_vector(vector_t* vector, void* element);
void insert_vector(vector_t* vector, void* element, int index_after);
void insert_end_vector(vector_t* vector, void* element);
void insert_start_vector(vector_t* vector, void* element);

void double_element(vector_t* vector, int index);
void shuffle_element(vector_t* vector, int index);

void transform(vector_t* vector, void function(vector_t*, int));


#endif
