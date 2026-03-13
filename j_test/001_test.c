#include <stdio.h>

int main() {

    printf("Lesson 15 - String Functions\n\n");

    printf("1. What is the length of a string, and how can the length be determined?\n");
    printf("Answer: The length of a string is the number of characters it contains before the null character (\\0). ");
    printf("It can be determined using the strlen() function.\n\n");

    printf("2. Before copying a string, what must you be sure to do?\n");
    printf("Answer: Make sure the destination string (array) has enough memory to store the copied string.\n\n");

    printf("3. What does the term concatenate mean?\n");
    printf("Answer: Concatenate means joining or combining two strings into one string.\n\n");

    printf("4. When comparing strings, what is meant by 'One string is greater than another string'?\n");
    printf("Answer: It means the ASCII value of the characters in one string is greater when compared character by character.\n\n");

    printf("5. What is the difference between strcmp() and strncmp()?\n");
    printf("Answer: strcmp() compares entire strings, while strncmp() compares only a specified number of characters.\n\n");

    printf("6. What is the difference between strcmp() and strcmpi()?\n");
    printf("Answer: strcmp() is case-sensitive, while strcmpi() ignores uppercase and lowercase differences.\n\n");

    printf("7. What values does isascii() test for?\n");
    printf("Answer: isascii() checks if a character is within the ASCII range (0 to 127).\n\n");

    printf("8. What are the character-test functions used for?\n");
    printf("Answer: Character-test functions check character types such as letters, digits, uppercase, lowercase, etc.\n\n");

    return 0;
}