#include <stdio.h>

int main() {

    printf("Introduction to Programming\n");
    printf("Module 4 - Lesson 14\n\n");

    printf("Section 1\n\n");

    printf("Q1: What is the difference between a text-mode stream and a binary stream?\n");
    printf("A1: A text-mode stream processes data as characters and may translate special characters like newline. A binary stream processes data as raw bytes without translation.\n\n");

    printf("Q2: What must your program do before it can access a disk file?\n");
    printf("A2: The program must open the file using fopen().\n\n");

    printf("Q3: When you open a file with fopen(), what information must you specify and what does the function return?\n");
    printf("A3: You must specify the file name and the file mode (like r, w, rb, wb). The function returns a FILE pointer.\n\n");

    printf("Q4: What are the three general methods of file access?\n");
    printf("A4: Sequential access, random access, and append access.\n\n");

    printf("Q5: What are the two general methods of reading a file's information?\n");
    printf("A5: Character-by-character reading and block reading.\n\n");

    printf("Q6: What is the value of EOF?\n");
    printf("A6: EOF is a constant that indicates the end of a file. It usually has the value -1.\n\n");

    printf("Q7: When is EOF used?\n");
    printf("A7: EOF is used when a program reaches the end of a file while reading data.\n\n");

    printf("Q8: What is the file position indicator, and how can you modify it?\n");
    printf("A8: The file position indicator shows the current location in a file. It can be modified using fseek(), rewind(), or ftell().\n\n");

    printf("Q9: When a file is first opened, where is the file position indicator pointing to?\n");
    printf("A9: It points to the beginning of the file.\n\n");

    printf("Q10: Write the code to close all file streams.\n");
    printf("A10: fcloseall();\n\n");

    printf("Q11: Is anything wrong with the following code?\n");
    printf("A11: Yes. The parentheses in the fopen() condition are incorrect. It should check if fopen() returns NULL correctly.\n\n");

    return 0;
}