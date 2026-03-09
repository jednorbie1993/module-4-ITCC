#include <stdio.h>
#include <string.h>

int main() {

    char storedName[] = "jed";
    char input[50];

    printf("Enter your name: ");
    scanf("%s", input);

    if(strcasecmp(storedName, input) == 0)
    {
        printf("Login success\n");
    }
    else
    {
        printf("Name not found\n");
    }

    return 0;
}

/*
strcmp()      → case sensitive
strcasecmp()  → ignore uppercase/lowercase
*/