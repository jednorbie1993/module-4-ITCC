#include <stdio.h>
#include <string.h>

int main() {

    char str1[80];
    char str2[80];
    int result;

    while (1) {

        printf("\nInput the first string (blank to exit): ");
        fgets(str1, sizeof(str1), stdin);

        if (strlen(str1) <= 1)
            break;

        printf("Input the second string: ");
        fgets(str2, sizeof(str2), stdin);

        /* Compare the two strings */
        result = strcmp(str1, str2);

        printf("\nstrcmp result: %d\n", result);

        /* Concatenate the strings */
        strcat(str1, str2);

        printf("After strcat: %s\n", str1);
    }

    return 0;
}