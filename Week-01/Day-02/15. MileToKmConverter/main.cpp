#include <iostream>

int main() {

    int Distance;
    std::cout << "Hello! Please enter how far your live from GreenFox! (Please tpye it in KM)" << std::endl;
    std::cin >> Distance;
    std::cout << "Thank you! It's " << Distance*0.62 << " in MILE!" << std::endl;


    return 0;
}