#include <stdio.h>

int main() {
    // Define variables
    char consumer_name[50];
    int consumer_number;
    char consumer_city[50];
    char month_of_bill[50];
    float amount_of_bill;

    // Get user input
    printf("Enter Consumer Name: ");
    scanf("%s", consumer_name);
    printf("Enter Consumer Number: ");
    scanf("%d", &consumer_number);
    printf("Enter Consumer City: ");
    scanf("%s", consumer_city);
    printf("Enter Month of Bill: ");
    scanf("%s", month_of_bill);
    printf("Enter Amount of Bill (Rs.): ");
    scanf("%f", &amount_of_bill);

    // Print bill details
    printf("\nElectricity Bill Details\n");
    printf("-------------------------\n");
    printf("Consumer Name: %s\n", consumer_name);
    printf("Consumer Number: %d\n", consumer_number);
    printf("Consumer City: %s\n", consumer_city);
    printf("Month of Bill: %s\n", month_of_bill);
    printf("Amount of Bill: Rs. %.2f\n", amount_of_bill);

    return 0;
}