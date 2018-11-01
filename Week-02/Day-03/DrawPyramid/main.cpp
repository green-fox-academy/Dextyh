#include <iostream>

int main() {


    std::cout << "Hey! Give me a number Bro!" << std::endl << "Your number: ";
    int number;
    std::cin >> number;


    std::string triangle = "*";
    std::string space = " ";

    int numberofspaces = number-1;

    for (int i = 0; i < number; i++) {

        for(int y = 0; y < numberofspaces; y++  ) {

            std::cout << space;

        }

        numberofspaces--;


        for (int x = 0; x < i; x++) {

            std::cout << triangle << triangle;
        }

        std::cout << triangle << std::endl;
    }






    return 0;
}