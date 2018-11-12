#include <iostream>
#include <fstream>
#include <string>
#include <exception>

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    try {

        int number;
        int newNumber = 10 / number;


        std::cout << "Give me a number!" << std::endl;
        std::cout << "Your nDmber: ";
        std::cin >> number;

        if (number == 0) {
            throw std::string ("Can't divide by 0");
        }


        std::cout << newNumber << std::endl;

        } catch (std::string &e) {
        std::cout << "FAIL" << std::endl;

    }


    return 0;
}