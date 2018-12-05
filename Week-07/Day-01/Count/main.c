#include <stdio.h>
#include <string.h>

int count(char * word, char character);

int main() {

    char * word = "Programming";
    char character = 'g';

    printf("%d", count(word, character));

    return 0;
}

int count(char * string, char character) {

    int index = 0;

    for (int i = 0; string[i] != character ; ++i) {
        index++;
    }
    int counter = 0;

    while(string[index+1] != character) {
        index++;
        counter++;
    }
    return counter;
}