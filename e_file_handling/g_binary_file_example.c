#include <stdio.h>

int main(){

    FILE *file;
    double pi = 3.14159;

    file = fopen("data.bin", "wb");

    fwrite(&pi, sizeof(double), 1, file);

    fclose(file);

    printf("Binary data written\n");

    return 0;
}