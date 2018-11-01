#include <iostream>

int main() {

    int number = 8;


    std::string symbol1 = "% % % %";
    std::string symbol2 = " % % % %";


    for (int i=0; i < number/2; i++) {

        std::cout << symbol1 << std::endl;
        std::cout << symbol2 << std::endl;


    }


    return 0;
}