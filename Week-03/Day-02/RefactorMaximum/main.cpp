#include <iostream>

int sizeOfArray();


int main() {

    int array[sizeOfArray()];


    std::cout << "Give me " << sizeof(array) / sizeof(array[0]) << " numbers please!" << std::endl;
    int numbers[sizeof(array) / sizeof(array[0])];
    for (int i=0; i < sizeof(array) / sizeof(array[0]); i++) {
        std::cout << "Number " << i+1 << ": ";
        std::cin >> numbers[i];
    }



    int biggest = numbers[0];
    for (int i =0; i < sizeof(array) / sizeof(array[0]); i++) {
        if (biggest < numbers[i]) {
            biggest = numbers[i];
        }
    }

    std::cout << "The biggest number in your array is: " << biggest << std::endl;
    std::cout << "The memory address of the biggest number is: " << &biggest << std::endl;


    return 0;
}



int sizeOfArray() {
    int size;
    std::cout << "Hey Bro! Give me a number please!" << std::endl;
    std::cout << "Your number: ";
    std::cin >> size;

    return size;
}
