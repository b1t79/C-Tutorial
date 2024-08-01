#include <stdio.h>
int main () {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18 ? printf ("You cetify as an adult \n") : printf ("You do not certify as an adult \n");
    return 0;
    }
    
//The code is written in C programming language. It asks the user to input their age, then checks
//if the age is greater than or equal to 18. If the age is greater than or equal to 18, it prints
//"You certify as an adult". Otherwise, it prints "You do not certify as an adult".
//The code is well-structured and easy to understand. The use of ternary operator makes the