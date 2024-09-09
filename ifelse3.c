#include<stdio.h>
int main () {
    int iq = 0;
    printf("Enter Your iq:");
    scanf("%d", &iq);
    if (iq > 100) {
        printf("You are smart");
    }
    else if (iq > 50) {
        printf("You are not smart");
}
return 0;
}

