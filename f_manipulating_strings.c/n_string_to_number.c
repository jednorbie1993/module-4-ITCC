#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char buf[80];
    double d;

    while (1) {

        printf("\nEnter the string to convert (blank to exit): ");
        gets(buf);

        if (strlen(buf) == 0)
            break;

        d = atof(buf); // atoi or atof

        printf("The converted value is %f\n", d);
    }

    return 0;
}
//ano functions nento or trabaho is string gagawin number convert kung baga
//madalas ginagamt to sa mga ID scan or ID enter 
//halimbawa ID number enter mo tapos papasok