// Recursion is a programming technique where a function calls itself in order to solve a problem. It typically involves a base case that stops the recursion and a recursive case that breaks the problem into smaller subproblems.

// Base case: A condition under which the recursion will stop. This prevents infinite recursion and allows the function to return a result.

#include<stdio.h>
void recursiveFunc(){
    printf("This is a recursive function.\n");
    recursiveFunc(); // This will cause infinite recursion if not stopped by a base case.
}
int main(){
    recursiveFunc();
    return 0;
}