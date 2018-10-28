#include <iostream>

int main() {

    int number = 17;
    int guess;

    std::cout << "I think of a number!" << std::endl;


    do {
    std::cout << "Guess: ";
    std::cin >> guess;

    if (guess==number) {
        std::cout << "CONGRATULATION" << std::endl << "You found the number: " << number << std::endl;
    } else if (guess < number) {
        std::cout << "The stored number is higher" << std::endl;
    } else if (number < guess) {
        std::cout << "The stored number is lower" << std::endl;
    }
    } while (guess !=number);

    return 0;
}