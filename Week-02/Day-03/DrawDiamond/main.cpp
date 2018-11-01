#include <iostream>

int main() {


    std::cout << "Hey! Give me a number Bro!" << std::endl << "Your number: ";
    int number;
    std::cin >> number;


    std::string triangle = "*";
    std::string space = " ";

    int numberofspaces = number-1;

    for (int i = 0; i < number; i++) {

        for(int y = 0; y < numberofspaces+1; y++  ) {

            std::cout << space;

        }

        numberofspaces--;


        for (int x = 0; x < i; x++) {

            std::cout << triangle << triangle;
        }

        std::cout << triangle << std::endl;
    }





    for (int f = number; 0 <= f; f--) {

        for (int g = numberofspaces; 0 < g+1; g--) {

            std::cout << space;
        }

        numberofspaces++;

        for (int h = f; 0 < h; h-- ) {

            std::cout << triangle << triangle;

        }

        std::cout << triangle <<  std::endl;
    }





    return 0;
}