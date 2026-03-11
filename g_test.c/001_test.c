#include <stdio.h>

int main() {

    printf("Lesson 13 - Answers\n\n");

    printf("Section 1\n\n");

    printf("1. What does NULL equal?\n");
    printf("Answer: NULL equals 0 or an empty pointer.\n\n");

    printf("2. What does it mean if the head pointer is equal to NULL?\n");
    printf("Answer: The linked list is empty.\n\n");

    printf("3. How are single-linked lists connected?\n");
    printf("Answer: Each node contains a pointer to the next node.\n\n");

    printf("4. How does a stack differ from a normal linked list?\n");
    printf("Answer: A stack uses LIFO (Last In First Out).\n\n");

    printf("5. How does a queue differ from a normal linked list?\n");
    printf("Answer: A queue uses FIFO (First In First Out).\n\n");

    printf("6. What is a tail pointer? What is a top pointer?\n");
    printf("Answer: Tail pointer points to the last node. Top pointer points to the top of a stack.\n\n");

    printf("7. Is a tail pointer needed in a single-linked list?\n");
    printf("Answer: No, but it can make insertion faster.\n\n");

    printf("8. What is the advantage of a double-linked list over a single-linked list?\n");
    printf("Answer: It allows traversal in both directions.\n\n");

    printf("9. What is the advantage of using a binary tree instead of a single-linked list?\n");
    printf("Answer: Binary trees allow faster searching and sorting.\n\n");

    printf("11. What is wrong with the following linked list structure?\n");
    printf("Answer: The 'next' member should be a pointer (struct client *next), not a structure.\n\n");


    printf("Section 2\n\n");

    printf("1. What are considered the basic data types?\n");
    printf("Answer: int, float, double, char.\n\n");

    printf("2. What are three ways of grouping data?\n");
    printf("Answer: Arrays, Structures, and Linked Lists.\n\n");

    printf("3. What is a benefit of using variable-length structures?\n");
    printf("Answer: They allow flexible memory usage depending on data size.\n\n");

    printf("4. What are some examples of files stored with variable-length structures?\n");
    printf("Answer: Text files, database records, and log files.\n\n");

    printf("5. Can you read a variable-length structure from a disk file using a single read statement?\n");
    printf("Answer: No, because the size of the data varies.\n\n");

    return 0;
}