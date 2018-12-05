#include <stdio.h>
#include <string.h>

int indexNumber(char * string, char character);

int main() {

    char string[20];
    char character;

    scanf("%s", string);
    scanf(" %c", &character);

    printf("First appearance of given character in given string: %d", indexNumber(string, character));

    return 0;
}

int indexNumber(char * string, char character)
{
    for (int i = 0; i < strlen(string); ++i) {
        if(character == string[i]) {
            return i;
        }
    }
    return -1;
}