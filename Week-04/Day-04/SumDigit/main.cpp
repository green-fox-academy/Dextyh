// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).


#include <iostream>

int digitsSum(int);

int main() {

    int number;

    std::cout << "Type a non-negative number here: ";
    std::cin >> number;

    std::cout << digitsSum(number) << std::endl;


    return 0;
}


int digitsSum (int n) {

    if (n <= 0) {
        return n;

    } else {
        return (n % 10) + digitsSum(n/10);
    }

}