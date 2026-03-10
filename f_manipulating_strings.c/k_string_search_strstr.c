#include <stdio.h>
#include <string.h>

int main() {

    char text[] = "How now brown cow";
    char word[] = "cow";
    char *loc;

    loc = strstr(text, word);

    if(loc != NULL)
        printf("Found at position: %ld\n", loc - text);
    else
        printf("Not found");

    return 0;
}