#include <iostream>

int doubling (int number);

int main() {

    int baseNum = 123;
    std::cout << doubling(baseNum) << std::endl;
    return 0;
}

int doubling(int number)
{
    number = number * 2;
    return number;
}