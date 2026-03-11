#include <stdio.h>

struct employee {
    char name[50];
    char **children;
    int number_of_children;
};

int main() {

    printf("Question:\n");
    printf("Rewrite the structure so it can store a variable number of children.\n\n");

    printf("Structure supports variable number of children.\n");

    return 0;
}
/*
Variable Number of Children (Using Pointer)

File: employee_variable_children.c
*/