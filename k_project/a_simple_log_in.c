#include <stdio.h>
#include <string.h>

int main(){

    char password[20];
    char correct[] = "admin";

    while(1){

        printf("Enter password: ");
        scanf("%s", password);

        if(strcmp(password, correct) == 0){
            printf("Access granted\n");
            break;
        }
        else{
            printf("Wrong password\n");
        }

    }

    return 0;
}

/*
1️⃣ Number Guessing Game
2️⃣ Student Grade Checker
3️⃣ Simple Calculator
4️⃣ Inventory List (array)
5️⃣ Mini Login + Register System
*/