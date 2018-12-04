#include <stdio.h>

int main() {

    int a = 22;
    int b = 13;
    int c = 0;

    c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    c = a - b;
    printf("%d - %d = %d\n", a, b, c);

    c = a * b;
    printf("%d * %d = %d\n", a, b, c);

    float d = (float)a / b;
    printf("%d / %d = %f\n", a, b, d);

    c = a % b;
    printf("%d / %d = Reminder: %d\n", a, b, c);

    return 0;
}