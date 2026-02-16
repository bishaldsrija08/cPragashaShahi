// WAP to swap two numbers value with each other.

#include<stdio.h>
int main(){
    int a = 10, b = 20;
    int temp;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a; // Store the value of a in temp
    a = b;
    b = temp; // Assign the value of temp (original a) to b
    printf("After swapping: a = %d, b = %d\n", a, b);


    return 0;
}