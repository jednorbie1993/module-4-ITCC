#include <stdio.h>

struct character {
    char name[50];
    struct character *next;
    struct character *prev;
};

int main() {

    printf("Question:\n");
    printf("Write a structure that is to be used in a double-linked list.\n");
    printf("The structure is to hold the name of a Star Trek character.\n\n");

    printf("Structure created successfully.\n");

    return 0;
}
/*
Structure for Double Linked List (Star Trek Character)

File: star_trek_dlist.c
*/