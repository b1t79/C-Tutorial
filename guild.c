#include<stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("My age is %d", _age);
    return 0;

}

int main (){
    int age = 22;
}