#include <iostream>

int main() {

    double massInKg = 81.2;
    double heightInM = 1.78;

    std::cout << "BMI = " << massInKg / (heightInM * heightInM) << std::endl;


    return 0;
}