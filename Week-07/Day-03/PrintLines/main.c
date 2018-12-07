#include <stdio.h>
#include <stdlib.h>

int line_counter(char * filename);

int main() {

    FILE * file_pointer;
    file_pointer = fopen("my-file.txt", "r");

    char single_line[100];
    while(!feof(file_pointer)) {
        fgets(single_line, 100, file_pointer);
        puts(single_line);
    }

    fclose(file_pointer);

    printf("%d", line_counter("my-file.txt"));

    return 0;
}

int line_counter(char * filename)
{
    FILE * file_pointer;
    file_pointer = fopen(filename, "r");
    if(!fopen(filename, "r")) {
        return -1;
    }

    int l_counter = 0;
    char single_line[100];
    while (!feof(file_pointer)){
        fgets(single_line, 100, file_pointer);
        l_counter++;
    }

    return l_counter;
}