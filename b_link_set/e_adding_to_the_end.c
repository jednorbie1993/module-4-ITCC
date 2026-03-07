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
    LINK temp;

    new = (LINK) malloc(sizeof(ELEMENT));

    printf("Enter number: ");
    scanf("%d", &new->data);

    new->next = NULL;

    if(first == NULL)
        first = new;
    else {
        temp = first;

        while(temp->next != NULL)
            temp = temp->next;

        temp->next = new;
    }

    return 0;
}