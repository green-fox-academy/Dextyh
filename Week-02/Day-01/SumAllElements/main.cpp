#include <iostream>

int main() {

    int ai[] = {3, 4, 5, 6, 7};

    int  x = 0;

    for (int a = 0; a < sizeof(ai) / sizeof(ai[0]); a++) {

        x = x + ai[a];

    }


    std::cout << x << std::endl;


    return 0;
}