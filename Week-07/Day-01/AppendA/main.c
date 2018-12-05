#include <stdio.h>
#include <string.h>

char* appendA(char * string);

int main() {

    char string[20];

    scanf("%s", string);

    printf("%s", appendA(string));

    return 0;
}

char* appendA(char * string) {

    strcat(string, "a");

    return string;
}