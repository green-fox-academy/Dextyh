#include <stdio.h>
#include <stdlib.h>

int main() {

    puts("Give me a number: ");
    int size = 0;
    scanf("%d", &size);

    int* array = calloc(size, sizeof(int));

    int counter = size;
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        printf("Give me %d more number(s): ", counter);
        scanf("%d", &array[i]);
        sum = sum + array[i];
        counter--;
    }

    array = (int*)realloc(array, (size + 1) * sizeof(int));
    array[size] = sum;

    for (int j = 0; j < size + 1; ++j) {
        printf("%d ", array[j]);
    }

    return 0;
}