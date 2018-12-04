#include <stdio.h>

int main() {

    int number = 46;
    int guess = 0;

    printf("Guess my number!\nType your guess here: ");
    scanf("%d", &guess);

    do {
        if (guess < number) {
            printf("My number is higher!\nGuess again here: ");
            scanf("%d", &guess);
        } else if (guess > number) {
            printf("My number is lower!\nGuess again here: ");
            scanf("%d", &guess);
        }
    } while (number != guess);

    printf("Congratulation! My number was %d", number);

    return 0;
}
