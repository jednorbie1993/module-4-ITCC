#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int grades[];   // variable-length array
};

int main() {

    int subjects;

    printf("How many subjects? ");
    scanf("%d", &subjects);

    // allocate memory
    struct student *s;

    s = malloc(sizeof(struct student) + subjects * sizeof(int));

    printf("Enter student ID: ");
    scanf("%d", &s->id);

    // input grades
    for(int i = 0; i < subjects; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &s->grades[i]);
    }

    printf("\nStudent ID: %d\n", s->id);

    printf("Grades:\n");
    for(int i = 0; i < subjects; i++) {
        printf("%d\n", s->grades[i]);
    }

    free(s);

    return 0;
}

/*
reviewed:
march 12, 2026 - 1 times

*/