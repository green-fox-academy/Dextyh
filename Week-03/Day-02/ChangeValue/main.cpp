#include <iostream>

float pointer (float* x);


int main() {


    float temperature = 21.3;

    std::cout << pointer(&temperature) << std::endl;





    return 0;
}



float pointer (float* x)
{

    float a;

    a = *x + 13;

    return a;
}