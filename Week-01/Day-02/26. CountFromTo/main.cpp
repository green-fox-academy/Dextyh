#include <iostream>

int main() {

    int first;
    int second;

    std::cout << "Hey Bro! Give me 2 numbers please: " << std::endl;
    std::cin >> first >> second;

    if (second <= first) {
        std::cout << "The second number should be bigger!" << std::endl;
    } else if (first < second) {
        for (first; first <= second; first++) {
            std::cout << first << std::endl;
        }
    }



    return 0;
}