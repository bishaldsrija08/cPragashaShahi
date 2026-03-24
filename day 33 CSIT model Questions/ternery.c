// Ternary operator is a shorthand for if-else statement. It takes three operands: a condition, a value if the condition is true, and a value if the condition is false. The syntax is: condition ? value_if_true : value_if_false;
// WAP to find the maximum of two numbers using ternary operator.
#include<stdio.h>
int main(){
    // int max = (a>b)? a : b; //max = 100
    // printf("Maximum value is: %d", max);
    int a = 100, b = 200;
    (a>b)? printf("Maximum value is: %d", a) : printf("Maximum value is: %d", b);
    return 0;
}