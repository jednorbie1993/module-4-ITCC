#include <stdio.h>

int main(){

    FILE *source;
    FILE *destination;
    int ch;

    source = fopen("source.txt", "r");
    destination = fopen("copy.txt", "w");

    if(source == NULL || destination == NULL){
        printf("Error opening files\n");
        return 1;
    }

    while((ch = fgetc(source)) != EOF){
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully\n");

    return 0;
}
/*
Ginamit dito
Function	Purpose
fgetc()	read character
fputc()	write character
EOF	end of file
*/