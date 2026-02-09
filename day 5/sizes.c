#include<stdio.h>
int main(){
    int myInt;
    float myFloat;
    char myChar;
    double myDouble;

    printf("Size of int: %zu bytes\n", sizeof(myInt));
    printf("Size of float: %zu bytes\n", sizeof(myFloat));
    printf("Size of char: %zu bytes\n", sizeof(myChar));
    printf("Size of double: %zu bytes\n", sizeof(myDouble));
    return 0;
    }