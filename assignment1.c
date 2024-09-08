#include <stdio.h>

// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, simpleInterest;

    // Input principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Input rate of interest
    printf("Enter the rate of interest (in %): ");
    scanf("%f", &rate);

    // Input time in years
    printf("Enter the time in years: ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = calculateSimpleInterest(principal, rate, time);

    // Print the result
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}