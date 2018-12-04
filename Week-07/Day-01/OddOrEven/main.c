#include <stdio.h>

enum EvenOdd {
    EVEN,
    ODD
};

int isEven(int number);
enum EvenOdd isEven1(int number);

int main() {

    int number = 0;

    printf("Give me a number: ");
    scanf("%d", &number);

    isEven(number);
    isEven1(number);
    
    return 0;
}

int isEven(int number) {

    if(number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

enum EvenOdd isEven1(int number) {

    if(number % 2 == 0) {
        return EVEN;
    } else {
        return ODD;
    }
}