#include <iostream>

int main() {


    int numbers[4] = {4, 5, 6, 7};

    for (int x = 0; x < (sizeof(numbers)) / sizeof(numbers[0]); ++x) {
        std::cout << numbers[x]<< std::endl;
    }


    return 0;
}