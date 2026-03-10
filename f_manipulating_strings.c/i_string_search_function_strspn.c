#include <stdio.h>
#include <string.h>

int main() {

    char text[] = "12345abc";
    char allowed[] = "0123456789";

    int result = strspn(text, allowed);

    printf("Matching characters: %d\n", result);

    return 0;
}