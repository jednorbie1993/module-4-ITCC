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

    if(first == NULL) {
        new->next = NULL;
        first = new;
    }

    printf("First element: %d\n", first->data);

    return 0;
}