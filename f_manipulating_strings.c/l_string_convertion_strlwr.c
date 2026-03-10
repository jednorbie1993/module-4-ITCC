#include <stdio.h>
#include <string.h>

int main() {

    char text[] = "HELLO WORLD";

    strlwr(text); //lowercase

    printf("%s\n", text);

    return 0;
}