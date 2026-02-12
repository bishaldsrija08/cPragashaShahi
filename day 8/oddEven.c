// WAP to check whether a number is even or odd using if else statement.

#include <stdio.h>
int main()
{
    int num = 11;
    if (num % 2 == 0) // 10 % 2 = 0, 0==0, true || 11 % 2 = 1, 1==0, false
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}