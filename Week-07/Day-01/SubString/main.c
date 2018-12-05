#include <stdio.h>
#include <string.h>

int subString(char * string1, char * string2);

int main() {

    char * string1 = "This is a big tit!";
    char * string2 = "big";

    printf("%d", subString(string1, string2));

    return 0;
}

int subString(char * string1, char * string2)
{
    if(strstr(string1, string2) && strlen(string1) != strlen(string2)) {
        return 1;
    } else if (strlen(string1) == strlen(string2)) {
        return -1;
    } else {
        return 0;
    }

}