#include <stdio.h>

int main() {

    FILE *file;

    file = fopen("data.txt", "w");

    if(file == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(file, "Hello World\n");
    fprintf(file, "This is file handling in C\n");

    fclose(file);

    return 0;
}