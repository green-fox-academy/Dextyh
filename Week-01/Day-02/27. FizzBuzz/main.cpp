#include <iostream>

int main() {


    int number;

    for (number = 1; number <= 100; number++) {
        if ((number%3 == 0) && (number%5 ==0)) {
            std::cout << "FizzBuzz" << std::endl;
        } else if (number%5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else if (number%3 == 0) {
            std::cout << "Fizz" << std::endl;
        } else {
            std::cout << number << std::endl;
        }
    }





    return 0;
}