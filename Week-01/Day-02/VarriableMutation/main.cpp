#include <iostream>

int main() {

    int a = 3;
    a += 10;
    std::cout << a << std::endl;

    int b = 100;
    b -= 7;
    std::cout << b << std::endl;

    int c = 44;
    c *= 2;
    std::cout << c << std::endl;

    int d = 125;
    d /= 5;
    std::cout << d << std::endl;

    int e = 8;
    std::cout << e * e * e << std::endl;

    int f1 = 123;
    int f2 = 345;
    std::cout << std::boolalpha << (f1 < f2) << std::endl;

    int g1 = 350;
    int g2 = 200;

    std:: cout << std::boolalpha << (g2*2 > g1) << std::endl;

    int h = 135798745;
    std:: cout << std::boolalpha << (h%11 ==0) << std::endl;

    int i1 = 10;
    int i2 = 3;

    std:: cout << std::boolalpha << ( i2*i2*i2 > i1 > i2*i2 ) << std::endl;

    int j = 1521;
    std:: cout << std::boolalpha << ( j%5 == 0 || j%3 == 0) << std::endl;



    std::string k = "Apple ";
    std:: cout << k << k << k << k << std::endl;

    return 0;
}