#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {

    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // create first node
    first = (struct node*) malloc(sizeof(struct node));
    first->data = 10;
    first->next = NULL;

    // create second node
    second = (struct node*) malloc(sizeof(struct node));
    second->data = 20;
    second->next = NULL;

    // create third node
    third = (struct node*) malloc(sizeof(struct node));
    third->data = 30;
    third->next = NULL;

    // connect nodes
    first->next = second;
    second->next = third;

    // traverse list
    struct node *temp = first;

    printf("Linked List Values:\n");

    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}