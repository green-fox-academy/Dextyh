#include <stdio.h>

void oldEnough(int age);

int main() {

    int age = 0;
    printf("How old are you?\nType your age here: ");
    scanf("%d", &age);

    oldEnough(age);

    return 0;
}

void oldEnough(int age) {

    if (age >= 18) {
        printf("You are old enough to buy alcohol!\n");
    } else {
        printf("You are too young to buy alcohol!\n");
    }
}