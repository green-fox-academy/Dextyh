#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int recursive (int first, int second);

int main() {

    int firstN;
    int secondN;

    std::cout << "Type a number here: ";
    std::cin >> firstN;
    std::cout << "Type an other number here: ";
    std::cin >> secondN;

    std::cout << recursive(firstN,secondN);

    return 0;
}

int recursive (int first, int second) {

    if (second != 0) {
        return first * recursive(first, second-1);

    } else {
        return 1;
    }




}