#include <stdio.h>
int main () {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18 ? printf ("You cetify as an adult \n") : printf ("You do not certify as an adult \n");
    return 0;
    }
    