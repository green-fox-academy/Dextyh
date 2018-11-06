#include <iostream>

int *pointer(int array[], int length);


int main() {


    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "The minimum value of array is:  " << *pointer(numbers, size) << std::endl;

    return 0;
}



int *pointer(int array[], int length)
{

    int LF = array[0];

    int* min = &array[0];

    for (int i = 0; i < length; i++) {

        if (LF > array[i]) {
            *min = array[i];
        }

    }

    return min;
}
