#include <stdio.h>

// Define a constant for pi
#define PI 3.14159

// Function to calculate the area of a circle
float calculate_area(float radius) {
    float area = PI * radius * radius;
    return area;
}

// Function to calculate the circumference of a circle
float calculate_circumference(float radius) {
    float circumference = 2 * PI * radius;
    return circumference;
}

int main() {
    float radius, area, circumference;

    // Get user input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = calculate_area(radius);
    circumference = calculate_circumference(radius);

    // Print the results
    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}