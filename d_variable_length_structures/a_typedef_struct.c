#include <stdio.h>

/* Define a new data type called date */
typedef struct {
    int month;
    char breaker1;
    int day;
    char breaker2;
    int year;
} date;

int main(void)
{
    date date1;
    date date2 = {1, '/', 1, '/', 1998};

    printf("\nEnter information for date 1:\n");

    printf("Enter month: ");
    scanf("%d", &date1.month);

    printf("Enter day: ");
    scanf("%d", &date1.day);

    printf("Enter year: ");
    scanf("%d", &date1.year);

    date1.breaker1 = '-';
    date1.breaker2 = '-';

    printf("\nYour dates are:\n\n");

    printf("Date 1: %d%c%d%c%d\n",
           date1.month,
           date1.breaker1,
           date1.day,
           date1.breaker2,
           date1.year);

    printf("Date 2: %d%c%d%c%d\n",
           date2.month,
           date2.breaker1,
           date2.day,
           date2.breaker2,
           date2.year);

    printf("\nSize of date structure: %lu\n", sizeof(date1));

    return 0;
}

/*
reviewed
march 13, 2026 - 1 times

*/