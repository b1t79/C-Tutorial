#include <stdio.h>

// Function to print multiplication table
void print_multiplication_table(int n) {
    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}

int main() {
    int n;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print multiplication table
    print_multiplication_table(n);

    return 0;
}