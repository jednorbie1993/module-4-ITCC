#include <stdio.h>
#include <string.h>

int main() {

    unsigned int length;
    char buf[80];

    while (1) {

        printf("\nEnter a line of text (blank line to stop): ");
        fgets(buf, sizeof(buf), stdin);

        length = strlen(buf);

        if (length <= 1)
            break;

        printf("That line is %u characters long.\n", length - 1);
    }

    return 0;
}

/*
strlen() → length ng string

strcpy() → copy string

strcat() → combine strings

strcmp() → compare strings

strncmp() → compare limited characters
*/