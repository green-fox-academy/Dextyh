#include <iostream>

int main() {



    int girls;
    int boys;

    std::cout << "How many Girls and how many Boys are comes to your party?" << std::endl;
    std::cin >> girls >> boys;

    if ((girls == boys) && (20 <= girls+boys)) {
        std::cout << "The party is excellent!" << std::endl;
    }
    else if ((girls != boys) && (20 <= girls+boys)) {
        std::cout << "Quite cool party!" << std::endl;
    }
    else if ((girls + boys < 20) && (1 <= girls)) {
        std::cout << "Average party..." << std::endl;
    }
    else if (girls < 1) {
        std::cout << "Sausage party" << std::endl;
    }

    return 0;
}