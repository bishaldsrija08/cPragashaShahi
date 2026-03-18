#include<stdio.h>
// Example of call by value in C
void printValue(int a){
    a = 20;
    printf("Value inside function: %d\n", a);
}

void printValuePointer(int *a){
    *a =20;
    printf("Value inside function: %d\n", *a);
}

int main(){
    int a =5;
    // printf("Value before function call: %d\n", a);
    // printValue(a);
    // printf("Value after function call: %d\n", a);

    printf("Value before function call: %d\n", a);
    printValuePointer(&a); // passing address of a to the function
    printf("Value after function call: %d\n", a);
    return 0;
}