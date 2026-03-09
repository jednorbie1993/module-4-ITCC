#include <stdio.h>
#include <string.h>

int main() {

    char first[50];
    char last[50];
    char fullname[100] = "";

    printf("Enter your first name: ");
    fgets(first, sizeof(first), stdin);

    printf("Enter your last name: ");
    fgets(last, sizeof(last), stdin);

    strcat(fullname, first);
    strcat(fullname, last);

    printf("So your name is %s", fullname);

    return 0;
}