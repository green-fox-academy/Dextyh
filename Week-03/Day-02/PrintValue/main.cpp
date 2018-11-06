#include <iostream>

int pointer (int* x);

int main() {


    int age = 31;

    std::cout << pointer(&age) << std::endl;


    return 0;
}





int pointer (int* x)
{

    int a = 0;

    a = *x;

    return a;
}
