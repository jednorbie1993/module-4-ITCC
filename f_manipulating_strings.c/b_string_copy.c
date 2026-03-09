#include <stdio.h>
#include <string.h>

int main() {

    char source[] = "Hello World";
    char dest[50];

    strcpy(dest, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", dest);

    return 0;
}