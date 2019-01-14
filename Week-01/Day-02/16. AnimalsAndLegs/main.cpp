#include <iostream>

int main() {




    int chickens;
    int pigs;
    std::cout << "Greetings Farmer! Can I ask how many chickens you have? And also tell me how many pigs you own please!" << std::endl;
    std::cin >> chickens >> pigs;
    std::cout << "Nice! Do you know that how many legs all of them have? I will tell you now! They has got " << chickens*2+pigs*4 << " legs!" << std::endl;





    return 0;
}