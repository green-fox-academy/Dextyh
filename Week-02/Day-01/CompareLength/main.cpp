#include <iostream>

int main() {

    int p1[3] = {1, 2, 3};
    int p2[2] = {4, 5};

    if (sizeof(p2) < sizeof(p1)) {
        std::cout << "P1 has more content! " << std::endl;
    } else {
        std::cout << "P2 has more content!" << std::endl;
    }


    return 0;
}