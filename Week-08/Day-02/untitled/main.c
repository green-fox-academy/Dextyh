#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* together(char* text1, char* text2, char* text3);

int main() {

    char* text1;
    char* text2;
    {
        char text1a[50];
        char text2a[50];

        scanf("%s", text1a);
        scanf("%s", text2a);

        text1 = (char*) malloc((strlen(text1a) + 1) * sizeof(char));
        text2 = (char*) malloc((strlen(text2a) + 1) * sizeof(char));

        strcpy(text1, text1a);
        strcpy(text2, text2a);
    }
    char *text3 = NULL;

    printf("%s", together(text1, text2, text3));

    free(text1);
    free(text2);
    free(text3);

    return 0;
}

char* together(char* text1, char* text2, char* text3)
{
    size_t length = strlen(text1) + strlen(text2);
    text3 = (char*) malloc((length + 1) * sizeof(char));

    strcat(text3, text1);
    strcat(text3, text2);

    return text3;
}