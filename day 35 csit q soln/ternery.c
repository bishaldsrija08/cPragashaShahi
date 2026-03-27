#include<stdio.h>
// Conditional Operator is also known as Ternary Operator which is used to evaluate a condition and return one of two values based on the result of the condition.

// Syntax: condition ? value_if_true : value_if_false;

// Example:
int main(){
    int max = (30 > 20) ? 30 : 20; // Ternary operator to find the maximum of two numbers
    printf("The maximum number is: %d", max);
    return 0;
}