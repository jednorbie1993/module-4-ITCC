#include <stdio.h>
#include <stdlib.h>

struct element {
    int data;
    struct element *next;
};

typedef struct element ELEMENT;
typedef ELEMENT *LINK;

void insert_link(LINK prev_link, LINK new_link)
{
    new_link->next = prev_link->next;
    prev_link->next = new_link;
}

int main() {

    printf("Function for inserting in middle created.\n");

    return 0;
}