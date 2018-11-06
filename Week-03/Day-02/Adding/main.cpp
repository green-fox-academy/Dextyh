#include <iostream>

int pointer (int* x);

int main() {


    int a = 20;
    int b = 17;

    std::cout << pointer(&a) + pointer(&b) << std::endl;


    return 0;
}





int pointer (int* x)
{

    int a;

    a = *x;

    return a;
}

