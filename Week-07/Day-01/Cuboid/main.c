#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

    printf("Give me 3 more numbers please: ");
    scanf("%d", &a);
    printf("Give me 2 more numbers please: ");
    scanf("%d", &b);
    printf("Give me 1 more number please: ");
    scanf("%d", &c);

    int surfaceArea = 2 * (a * b + a * c + b * c);
    int volume = a * b * c;

    printf("Surface Area: %d\n", surfaceArea);
    printf("Volume: %d\n", volume);

    return 0;
}