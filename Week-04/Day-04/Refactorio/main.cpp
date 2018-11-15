#include <iostream>

int factorial (int number);

int main() {

    int number;
    std::cout << "Give me a number here: ";
    std::cin >> number;
    std::cout << factorial(number);

    return 0;
}

int factorial (int number) {

    if (number <= 1) {
        return number;
    } else {
        return number * factorial(number-1);
    }

}