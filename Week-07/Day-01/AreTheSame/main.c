#include <stdio.h>
#include <string.h>
#include<ctype.h>

int areTheSame1(char * firstString, char * secondString);
int areTheSame2(char * firstString, char * secondString);

int main() {

    char firstString[20];
    char secondString[20];

    printf("Give me a number please!\n");
    scanf("%s", firstString);
    printf("Give me an other number please!\n");
    scanf("%s", secondString);

    printf("With case sensitivity!\n");
    areTheSame1(firstString, secondString);

    printf("Without case sensitivity!\n");
    areTheSame2(firstString, secondString);

    return 0;
}

int areTheSame1(char * firstString, char * secondString){

    if(strcmp(firstString, secondString) == 0) {
        printf("Two strings are the same!\n");
        return 1;
    } else {
        printf("Two strings are NOT the same!\n");
        return 0;
    }
}

int areTheSame2(char * firstString, char * secondString) {

    for (int i = 0; i < strlen(firstString); ++i) {
        if(tolower(firstString[i]) != tolower(secondString[i])) {
            printf("Two strings are NOT the same!\n");
            return 0;
        }
    }
    printf("Two strings are the same!\n");
    return 1;
}