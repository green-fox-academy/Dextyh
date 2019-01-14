#include <iostream>

int main() {

    double a = 7.3;
    double b = 4.2;
    double c = 8.6;

    std::cout << "Cuboid Surface Area: " << 2*(a*b+a*c+b*c) << std::endl << "Cuboid Volume: " << a * b * c << std::endl;


    return 0;
}