#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* connect(char* first_name, char* last_name);

int main() {

    char* first_name = "Mark ";
    char* last_name = "Toth\n";

    printf("%s",connect(first_name, last_name));

    return 0;
}

char* connect(char* first_name, char* last_name)
{
    size_t size = strlen(first_name) + strlen(last_name);

    char* full_name = calloc(size + 1, sizeof(char));

    strcat(full_name,first_name);
    strcat(full_name,last_name);

    if(strlen(full_name) == 0) {
        return "This string is empty you little bastard!\n";
    } else {
        return full_name;
    }
}