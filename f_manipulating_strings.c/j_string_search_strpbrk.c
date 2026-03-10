#include <stdio.h>
#include <string.h>

int main() {

    char text[] = "Hello World";
    char chars[] = "xyzol";
    char *result;

    result = strpbrk(text, chars);

    if(result != NULL)
        printf("Found at position: %ld\n", result - text);
    else
        printf("No match");

    return 0;
}