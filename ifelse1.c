#include <stdio.h>
int main () {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are an adult. \n");
        printf("You can vote \n");
        printf("You can drive \n");
    } else {
        printf("You are not an adult. \n");
        printf("You cannot vote \n");
        printf("You cannot drive \n");
    }
    printf("Leave");

    return 0;
}