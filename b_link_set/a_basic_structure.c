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

    printf("Linked list structure created.\n");

    return 0;
}