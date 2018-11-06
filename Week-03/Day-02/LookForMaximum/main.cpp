#include <iostream>

int main() {

    std::cout << std::endl;


    std::cout << "Hey Bro! Give me a number please!" << std::endl;
    std::cout << "Your number: ";

    int size;
    std::cin >> size;


    std::cout << "Give me " << size << " numbers please!" << std::endl << std::endl;

    int numbers[size];

    for (int i=0; i < size; i++)
    {

        std::cout << "Number " << i+1 << ": ";
        std::cin >> numbers[i];

    }

    std::cout << std::endl;


    int biggest = numbers[0];

    for (int i =0; i < size; i++)
    {

        if (biggest < numbers[i])
        {
            biggest = numbers[i];
        }


    }

    std::cout << "The biggest number in your array is: " << biggest << std::endl;
    std::cout << "The memory address of the biggest number is: " << &biggest << std::endl;


    return 0;
}
