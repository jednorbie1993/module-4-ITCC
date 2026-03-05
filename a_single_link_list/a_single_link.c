#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *next;
};

int main() {

    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // Allocate memory
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    // Assign data
    head->data = 'A';
    head->next = second;

    second->data = 'B';
    second->next = third;

    third->data = 'C';
    third->next = NULL;

    // Print linked list
    struct node *temp = head;

    while(temp != NULL) {
        printf("Data: %c\n", temp->data);
        temp = temp->next;
    }

    // Free memory
    free(third);
    free(second);
    free(head);

    return 0;
}