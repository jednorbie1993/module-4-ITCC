#include <stdio.h>

int main() {

    FILE *fp;
    int c;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);

    return 0;
}