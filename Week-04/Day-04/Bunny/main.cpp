#include <iostream>

int bunny (int number);

int main() {

    int bunnys;

    std::cout << "Type number of Bunnys here: ";
    std::cin >> bunnys;
    std::cout << bunny(bunnys);


    return 0;
}

int bunny (int number) {

    if (number != 0) {
        return bunny(number-1) + 2;

    } else {
        return 0;
    }


}