// WAP to check greatest among three numbers using nested if else statement.
#include <stdio.h>
int main()
{
    int a, b, c;
    a = 60;
    b = 20;
    c = 50;

    if (a > b && a > c) // 60>20 && 60>50, true && true, true
    {
        printf("A is greatest");
    }
    else if (b > c) // 20>50, false
    {
        printf("B is greatest");
    }
    else
    {
        printf("C is greatest");
    }
    return 0;
}