#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {

    struct node *first;
    struct node *second;
    struct node *third;
    struct node *temp;

    // create nodes
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    // assign data
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // traverse list
    temp = first;

    printf("Linked List Values:\n");

    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}