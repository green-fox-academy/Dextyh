#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* repeater(char* word, int number);

int main() {

    char* word = "Asus";
    int number = 6;

    printf("%s", repeater(word, number));

    return 0;
}

char* repeater(char* word, int number)
{
    size_t repeater_size = strlen(word) * number;

    char* new_string = calloc(repeater_size, sizeof(char));

    for (int i = 0; i < number; ++i) {
        strcat(new_string, word);
    }
    return new_string;
}