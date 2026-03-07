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
    LINK new;

    new = (LINK) malloc(sizeof(ELEMENT));

    printf("Enter number: ");
    scanf("%d", &new->data);

    new->next = first;
    first = new;

    printf("New first element: %d\n", first->data);

    return 0;
}