#include <iostream>


void swap (int* x, int* y);

int main() {

    int a = 10;
    int b = 316;

    swap(&a, &b);


    std::cout << "a = " << a << std::endl << "b = " << b << std::endl;

    return 0;
}

void swap (int* x, int* y) {

    int z;

    z=*x;
    *x=*y;
    *y=z;

}