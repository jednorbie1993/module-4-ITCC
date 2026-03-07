#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *front = NULL;
NODE *rear = NULL;

void enqueue(int value) {

    NODE *new = malloc(sizeof(NODE));

    new->data = value;
    new->next = NULL;

    if(rear == NULL) {
        front = rear = new;
        return;
    }

    rear->next = new;
    rear = new;
}

void dequeue() {

    NODE *temp;

    if(front == NULL)
        return;

    temp = front;
    front = front->next;

    free(temp);
}

int main() {

    enqueue(5);
    enqueue(10);
    dequeue();

    printf("Queue operation done\n");

    return 0;
}