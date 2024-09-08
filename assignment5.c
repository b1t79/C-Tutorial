#include <stdio.h>

int main() {
    int num1 = 100;
    int num2 = 500;

    // Addition
    int sum = num1 + num2;
    printf("Addition: %d + %d = %d\n", num1, num2, sum);

    // Multiplication
    int product = num1 * num2;
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);

    // Division
    float quotient = (float)num1 / num2;
    printf("Division: %d / %d = %.2f\n", num1, num2, quotient);

    // Subtraction
    int difference = num1 - num2;
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);

    return 0;
}