#include <iostream>

int main() {


    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int* aPointer = &a;
    double* bPointer = &b;
    std::string* namePointer = &name;


    std::cout << aPointer << std::endl;
    std::cout << bPointer << std::endl;
    std::cout << namePointer << std::endl;


    return 0;
}