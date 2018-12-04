#include <stdio.h>

enum bool {
    TRUE,
    FALSE
};

int equal(int a, int b);
enum bool equal1(int a, int b);

int main( )
{
    int firstNumber = 0;
    int secondNumber = 0;

    printf("Type 2 more numbers: ");
    scanf("%d", &firstNumber);
    printf("Type 1 more number: ");
    scanf("%d", &secondNumber);

    equal(firstNumber, secondNumber);
    equal1(firstNumber, secondNumber);

    return 0;
}

int equal(int a, int b) {

    if (a == b) {
        return 1;
    } else {
        return 0;
    }
}

enum bool equal1(int a, int b) {

    if (a == b){
        return TRUE;
    } else {
        return FALSE;
    }
}
