#include <iostream>
#include "apple.h"
#include <vector>

int main() {

    std::cout << getApple() << std::endl;

    std::vector<int> listOfInts;
    listOfInts.push_back(3);
    listOfInts.push_back(7);
    std::cout << sumFunction(listOfInts) << std::endl;

    return 0;
}