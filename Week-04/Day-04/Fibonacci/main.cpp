#include <iostream>

int fibonacci(int number);

int main() {

    int number;
    std::cout << "Give me a number here: ";
    std::cin >> number;
    std::cout << fibonacci(number);


    return 0;
}

int fibonacci(int number) {

    if(number <= 1){
        return number;
    }else{
        return fibonacci(number-1) + fibonacci(number-2);
    }
}