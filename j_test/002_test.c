#include <stdio.h>
#include <string.h>

int main() {

    char *string1;
    char string2[50];

    string1 = "Hello World";

    strcpy(string2, string1);

    printf("%s %s\n", string1, string2);

    return 0;
}

/*
char *string1, string2;
string1 = "Hello World";
strcpy(string2, string1);
printf("%s %s", string1, string2);
*/