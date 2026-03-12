#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct rental_info_tag {
    char first_name[16];
    char last_name[20];
    int number_of_videos;
    char videos[][20];   // variable part
};

int main() {

    int n;

    printf("How many videos will be rented? ");
    scanf("%d", &n);

    // allocate memory for structure + videos
    struct rental_info_tag *person;

    person = malloc(sizeof(struct rental_info_tag) + (n * sizeof(person->videos[0])));

    printf("Enter first name: ");
    scanf("%s", person->first_name);

    printf("Enter last name: ");
    scanf("%s", person->last_name);

    person->number_of_videos = n;

    for(int i = 0; i < n; i++) {
        printf("Enter video %d: ", i + 1);
        scanf("%s", person->videos[i]);
    }

    printf("\nCustomer: %s %s\n", person->first_name, person->last_name);
    printf("Videos rented:\n");

    for(int i = 0; i < person->number_of_videos; i++) {
        printf("%s\n", person->videos[i]);
    }

    free(person);

    return 0;
}
/*
studied:
march 12, 2026

*/