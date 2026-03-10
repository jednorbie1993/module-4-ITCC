#include <stdio.h>
#include <ctype.h>

int main() {

    char text[] = "Hello";
    int i = 0;

    while(text[i]) {
        text[i] = tolower(text[i]);
        i++;
    }

    printf("%s", text);

    return 0;
}