#include <stdio.h>

int isPrime(int number);

int main() {

    int number = 0;

    printf("Give me a number here: ");
    scanf("%d", &number);

    isPrime(number);

    return 0;
}

int isPrime(int number) {

    int isPrime = 1;

    for(int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = 0;
        }
    }

    if(isPrime == 1) {
        printf("Your number is PRIME\nReturned: 1");
        return 1;
    } else {
        printf("Your number is NOT PRIME\nReturned: 0");
        return 0;
    }
}