// WAP to check wheter a student is passed or failed. [marks>=40, pass]
// syntax of ternary operator: (condition) ? (if true) : (if false)

#include <stdio.h>
int main()
{
    int marks = 1;
    (marks >= 40) ? printf("Passed") : printf("Failed");
}