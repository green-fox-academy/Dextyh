#include <iostream>

int main() {


    float hours = 6;
    float days = 5;
    float weeks = 17;

    std::cout << hours * days * weeks << std::endl;
    float result = 510;


    // Working hours weekly is 52

    float work = 52; // 884

    std::cout << result / (work * weeks) * 100 << "%" << std::endl;





    return 0;
}