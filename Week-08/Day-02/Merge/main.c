#include <stdio.h>
#include <stdlib.h>

void push_back(int* array, int number, int *size);

int main() {

    int size = 10;

    int* even_array = calloc(size, sizeof(int));
    int* odd_array = calloc(size, sizeof(int));

    int even = 2;
    int odd = 1;

    for (int i = 0; i < size; ++i) {
        even_array[i] = even;
        odd_array[i] = odd;
        even += 2;
        odd += 2;
    }

    int new_size = size;
    for (int k = 0; k < size; ++k) {
        push_back(even_array, odd_array[k], &new_size);
    }


    for (int j = 0; j < new_size; ++j) {
        printf("%d. Element: %d\n", j+1, even_array[j]);
    }

    return 0;
}

void push_back(int* array, int number, int *size)
{
    *size += 1;
    array = (int*)realloc(array, *size);
    array[*size-1] = number;
}