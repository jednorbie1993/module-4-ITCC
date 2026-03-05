#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {

    struct node *head;
    struct node *second;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

    printf("%d -> %d\n", head->data, head->next->data);

    return 0;
}