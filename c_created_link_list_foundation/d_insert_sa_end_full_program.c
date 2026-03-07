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
    struct node *newNode;
    struct node *temp;

    // create initial nodes
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // create new node
    newNode = malloc(sizeof(struct node));
    newNode->data = 40;
    newNode->next = NULL;

    // find last node
    temp = first;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    // connect new node at end
    temp->next = newNode;

    // display list
    temp = first;

    printf("Linked List Values:\n");

    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}