#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You certify as an Adult \n");
    }
    else if (age > 13 && age < 18) {
       printf("You are a Teenager \n"); 
    }
    else {
        printf("You are a Child \n");
    }
    return 0;
}