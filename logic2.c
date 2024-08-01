#include <stdio.h>

int main() {
    printf("%d \n", 3>4 && 5>2);
    printf("%d \n", 3>4 || 5>2);
    printf("%d \n", !( (3>4) && (7<1)));
}