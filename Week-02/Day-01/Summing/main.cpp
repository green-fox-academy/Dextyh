#include <iostream>


int sum(int x);

int main() {

    int something = 6;

    std::cout << sum(something) << std::endl;




    return 0;
}

int sum(int x) {

    int y = 0;

    for (int z = 1; z <= x; ++z) {
        y = y+z;
    }

    return y;

}