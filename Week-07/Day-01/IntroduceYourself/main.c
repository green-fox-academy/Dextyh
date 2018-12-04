#include <stdio.h>

int main() {

    char name[20];
    int age = 0;
    float height = 0;

    printf("Give me your Name please: ");
    scanf("%s", name);

    printf("Give me your Age please: ");
    scanf("%d", &age);

    printf("Give me your Height please: ");
    scanf("%f", &height);

    printf("%s is %d years old and %.2f tall!\n", name, age, height);

    return 0;
}