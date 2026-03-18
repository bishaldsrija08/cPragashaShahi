#include<stdio.h>
int main(){
    int age = 34;
    int *ptr = &age;

    printf("The value of age is: %d\n", age);
    printf("The value of age using pointer is: %d\n", *ptr); // using * operator to get the value at the address stored in ptr
    printf("The value is %d", *(&age));
    return 0;
}

/*
Address - &
Value - *
*/