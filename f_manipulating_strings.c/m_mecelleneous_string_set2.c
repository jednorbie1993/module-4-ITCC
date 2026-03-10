#include <stdio.h>
#include <string.h>

int main() {

    char text[] = "Hello World";

    printf("%s\n", strnset(text, '*', 5)); //change but selection pili ka kung ilan gusto mo itago

    return 0;
}