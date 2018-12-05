#include <stdio.h>
#include <string.h>

int lengthName(char* name);

int main() {

    char name[20];
    printf("What is your last name?\n");
    scanf("%s", name);

    printf("Without string.h: %d\n", lengthName(name));
    printf("With string.h: %d\n", (int)strlen(name));

    return 0;
}

int lengthName(char * name) {

    int lengthCounter = 0;

    for (int i = 0; name[i] != '\0'; ++i) {
        lengthCounter++;
    }
    return lengthCounter;
}