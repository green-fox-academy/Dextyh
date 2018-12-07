#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE * file_pointer;
    file_pointer = fopen("my-file.txt", "w");

    fprintf(file_pointer, "Valami1\n");
    fprintf(file_pointer, "Valami2\n");
    fprintf(file_pointer, "Valami3");


    fclose(file_pointer);


    file_pointer = fopen("my-file.txt", "r");

    char single_line[100];
    while(!feof(file_pointer)) {
        fgets(single_line, 100, file_pointer);
        puts(single_line);
    }
    fclose(file_pointer);

    return 0;
}