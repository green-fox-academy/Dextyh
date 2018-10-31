#include <iostream>

int main() {


    std::cout << "Hey! Give me a number Bro!" << std::endl << "Your number: ";
    int number;

    std::cin >> number;

    std::string triangle = "*";


    for (int i = 0; i < number; i++) {

        for (int x = 0; x < i; x++) {

            std::cout << triangle;
        }

        std::cout << triangle << std::endl;
    }


    return 0;
}