#include <iostream>
#include "apple.h"

std::string getApple() {

    return "appleFAIL";
}

int sumFunction(std::vector<int> sumVector) {

    int collectSum = 0;

    for (int i = 0; i < sumVector.size(); ++i) {
        collectSum = collectSum + sumVector[i];
    }

    return collectSum;
}
