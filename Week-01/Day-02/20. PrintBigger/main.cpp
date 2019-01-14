#include <iostream>

int main() {

    int a;
    int b;
    int bigger;
    std::cout << "Give me 2 numbers Please!" << std::endl;

    std::cin >> a >> b;

    if (b < a) {
        bigger = a;
    }
    if (a < b) {
        bigger =b;
    }

    std::cout << "Bigger number is: " << bigger << std::endl;

    return 0;
}