#include <stdio.h>

int sum(int firstNumber, int secondNumber);

int main() {

    int firstNumber = 0;
    int secondNumber = 0;

    printf("Give me a number here: ");
    scanf("%d", &firstNumber);
    printf("Give me an other number here: ");
    scanf("%d", &secondNumber);

    sum(firstNumber, secondNumber);

    return 0;
}

int sum(int firstNumber, int secondNumber) {

    int sumFirst = 0;
    int sumSecond = 0;

    while(firstNumber != 0) {

        sumFirst = sumFirst + firstNumber % 10;
        firstNumber = firstNumber / 10;
    }

    while(secondNumber != 0) {

        sumSecond = sumSecond + secondNumber % 10;
        secondNumber = secondNumber / 10;
    }

    if (sumFirst == sumSecond) {
        printf("Sum of digits are EQUAL!");
        return 1;
    } else {
        printf("Sum of digits are NOT EQUAL!");
        return 0;
    }

}