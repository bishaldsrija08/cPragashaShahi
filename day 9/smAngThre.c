// WAP to check smallest among three numbers using nested if else statement.
#include <stdio.h>
int main()
{
    int a, b, c;
    a = 60;
    b = 20;
    c = 50;

    if (a < b && a < c) // 60<20 && 60<50, false
    {
        printf("A is smallest");
    }
    else if (b < c) // 20<50, true
    {
        printf("B is smallest");
    }
    else
    {
        printf("C is smallest");
    }
    return 0;
}