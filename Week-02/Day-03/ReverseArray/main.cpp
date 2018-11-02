#include <iostream>



int main() {


    int array[] = {1, 2, 3, 4, 5};

    int size = sizeof(array) / sizeof(array[0]);


    for (int i = 0; i < size; i++) {

        std::cout << array[i] << std::endl;
    }


    std::cout << std::endl << std::endl;



    for (int x = 0; x < (size - 1) / 2; x++) {

        int reverse = array[size - 1 - x];
        array[size - 1 - x] = array[x];
        array[x] = reverse;
    }


    for (int i = 0; i < size; i++) {

        std::cout << array[i] << std::endl;
    }



    return 0;
}