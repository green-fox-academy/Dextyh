#include <iostream>


int main() {

    std::cout << std::endl;


    std::cout << "Hello! Give me a number please!" << std::endl;
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


    std::cout << "Give me a number what you are looking for!" << std::endl;
    std::cout << "Number: ";
    int numberlf;
    std::cin >> numberlf;

    int index;

    for (int i =0; i < size; i++)
    {

        if (numberlf == numbers[i])
        {
             index = i;
             break;

        } else {
            index = 0;
        }

    }

    std::cout << "The index of the number what you are looking for is: " << index << std::endl;


    return 0;
}
