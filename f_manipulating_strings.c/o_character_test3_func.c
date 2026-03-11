#include <stdio.h>

int get_int(void);

int main() {

    int x;

    x = get_int();

    printf("You entered %d\n", x);

    return 0;
}

int get_int(void) {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    return num;
}
//eto easy with may sariling functions para di kalan malito start ulit sa basic
// reviewed 3/11/2026