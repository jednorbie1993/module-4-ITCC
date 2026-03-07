#include <stdio.h>
#include <stdlib.h>

struct element {
    int data;
    struct element *next;
};

typedef struct element ELEMENT;
typedef ELEMENT *LINK;

int main() {

    LINK first = NULL;
    LINK temp;

    temp = first;

    if(first != NULL) {
        first = first->next;
        free(temp);
    }

    printf("First element deleted\n");

    return 0;
}