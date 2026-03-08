#include <stdio.h>

int main(){

    FILE *file;
    int ch;

    file = fopen("data.txt", "r");

    if(file == NULL){
        printf("Cannot open file\n");
        return 1;
    }

    while((ch = fgetc(file)) != EOF){
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}