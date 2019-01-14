#include <iostream>

int main() {

    int number1;
    int number2;
    int number3;
    int number4;
    int number5;

    std::cout << "Type 5 more numbers please!" << std::endl;
    std::cin >> number1;
    std::cout << "Type 4 more numbers please!" << std::endl;
    std::cin >> number2;
    std::cout << "Type 3 more numbers please!" << std::endl;
    std::cin >> number3;
    std::cout << "Type 2 more numbers please!" << std::endl;
    std::cin >> number4;
    std::cout << "Type 1 more number please!" << std::endl;
    std::cin >> number5;

    std::cout << "Here is your numbers SUM: " << number1+number2+number3+number4+number5 << std::endl << "Here is your numbers AVERAGE: " << (float)(number1+number2+number3+number4+number5) / 5 << std::endl;






    return 0;
}