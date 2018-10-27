#include <iostream>

int main() {

    int a;
    int b;
    int c;
    int d;
    int e;

    std::cout << "Hey Bro! Type me five numbers now please!" << std::endl;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << "Here is your numbers SUM: " << a+b+c+d+e << std::endl;
    std::cout << "If you wanna know their AVERAGE type 1, if not type 0 !" << std::endl;

    bool yesno;
    std::cin >> yesno;
    if( yesno == 1 ) {
        std::cout << "Okay, here is your numbers AVERAGE: " << (a+b+c+d+e)/5 << std::endl;
    } else if( yesno == 0 ) {
        std::cout << "Okay bro, it's on you!" << std::endl;
    }

    return 0;
}