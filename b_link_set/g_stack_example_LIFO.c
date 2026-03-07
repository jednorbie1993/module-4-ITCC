#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *top = NULL;

void push(int value) {

    NODE *new = malloc(sizeof(NODE));

    new->data = value;
    new->next = top;
    top = new;
}

void pop() {

    NODE *temp;

    if(top == NULL) {
        printf("Stack empty\n");
        return;
    }

    temp = top;
    top = top->next;

    free(temp);
}

int main() {

    push(10);
    push(20);
    pop();

    printf("Stack operation done\n");

    return 0;
}