#include <iostream>

void counter(int);

int main() {

    int number;

    std::cout << "Type a number here: ";
    std::cin >> number;
    counter(number);

    return 0;
}


void counter (int n) {

    if (n >= 1) {
        std::cout << "Number: " << n << std::endl;
        counter(n - 1);
    }

}