#include <stdio.h>

int main () {
    char day; //m- monday t- tuesday w- wednesday T- thursday ...
    printf("Enter a number (1-7): ");
    scanf("%s", &day);
    switch (day) {
        case 'm':
            printf("Monday \n");
            break;
        case 't':
            printf("Tuesday \n");
            break;
        case 'w':
            printf("Wednesday \n");
            break;
        case 'T':
            printf("Thursday \n");
            break;
        case 'f':
            printf("Friday \n");
            break;
        case 's':
            printf("Saturday \n");
            break;
        case 'S':
            printf("Sunday \n");
            break;
        default: printf("Invalid input \n");
    }
}
