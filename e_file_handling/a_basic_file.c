#include <stdio.h>

int main() {

    FILE *file;

    file = fopen("test.txt", "r");

    if(file == NULL){
        printf("File failed to open\n");
        return 1;
    }

    printf("File opened successfully\n");

    fclose(file);

    return 0;
}