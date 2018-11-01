#include <iostream>

int main() {


    std::cout << "Hey! Give me a number Bro!" << std::endl << "Your number: ";
    int number;
    std::cin >> number;


    std::string symbol = "%";

    std::cout << "%%%%%%" << std::endl;


    for (int i=0; i < number-2; i++) {

        std::cout << symbol << "    " << symbol << std::endl;
    }


    std::cout << "%%%%%%" << std::endl;

    return 0;
}