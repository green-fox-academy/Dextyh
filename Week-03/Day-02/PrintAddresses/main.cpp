#include <iostream>



int main() {

    std::cout << std::endl;

    std::cout << "Hey Bro! Give me 5 numbers please!" << std::endl << std::endl;

    int numbers[5];

    for (int i=0; i < 5; i++)
    {

        std::cout << "Number " << i+1 << ": ";
        std::cin >> numbers[i];

    }

    std::cout << std::endl;

    for (int i =0; i < 5; i++)
    {

        std::cout << &numbers[i] << std::endl;

    }


    return 0;
}

