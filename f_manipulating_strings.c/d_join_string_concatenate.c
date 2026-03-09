#include <stdio.h>
#include <string.h>

int main() {

    char first[50];
    char last[50];
    char fullname[100] = "";

    printf("Enter your first name: ");
    scanf("%s", first);

    printf("Enter your last name: ");
    scanf("%s", last);

    strcat(fullname, first);   // idagdag first name
    strcat(fullname, " ");     // space
    strcat(fullname, last);    // idagdag last name

    printf("So your name is %s\n", fullname);

    return 0;
}