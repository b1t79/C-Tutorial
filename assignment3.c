#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5.0) + 32;
    return fahrenheit;
}

int main() {
    float celsius, fahrenheit;

    // Get user input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = celsius_to_fahrenheit(celsius);

    // Print the result
    printf("%.1f°C is equal to %.1f°F\n", celsius, fahrenheit);

    return 0;
}