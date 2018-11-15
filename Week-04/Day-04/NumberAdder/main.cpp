#include <iostream>

int counter(int);

int main() {

    int number;

    std::cout << "Type a number here: ";
    std::cin >> number;
    std::cout << counter(number) << std::endl;


    return 0;
}


int counter (int n) {

    if (n <= 1) {
        return 1;
    } else {
        return (n + counter(n-1));
    }

}