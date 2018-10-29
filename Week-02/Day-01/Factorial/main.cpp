#include <iostream>

int factorio(int x);

int main() {

    int number = 5;

    std::cout << factorio(number) << std::endl;

    return 0;
}


int factorio(int x) {

    int y = 1;

    for (int z = 1; z <= x; ++z) {
        y = y * z;
    }

    return y;
}




