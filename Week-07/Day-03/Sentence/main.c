#include <stdio.h>
#include <string.h>

void token_black(char * string_array);

int main() {

    printf("Type a sentence here: ");
    char sentence[100];
    gets(sentence);

    token_black(sentence);

    return 0;
}

void token_black(char * string_array)
{
    char * word = strtok(string_array, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }
}