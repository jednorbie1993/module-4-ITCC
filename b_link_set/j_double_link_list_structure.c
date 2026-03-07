#include <stdio.h>
#include <stdlib.h>

struct element {
    int data;
    struct element *next;
    struct element *previous;
};

int main() {

    printf("Double linked list structure created\n");

    return 0;
}