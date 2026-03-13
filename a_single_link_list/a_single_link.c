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

/*
Input ba ito? → scanf
Output? → printf
Decision? → if / switch
Repeat? → for / while / do while
Text? → string (strlen, strcpy, strcmp)
Numbers? → int / float / double
List? → array
File? → fopen
Math calculations? → math.h (sqrt, pow)
Random numbers? → rand
Character check? → ctype.h (isdigit, isalpha)
Convert text to number? → atoi / atof
Memory allocation? → malloc / free
Custom reusable code? → function
Program split into parts? → header files (#include)

Input ba ito? → scanf
Output? → printf
Decision? → if
Repeat? → loop
Text? → string
Numbers? → int / float
List? → array
File? → fopen

*/