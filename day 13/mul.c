// WAP to print multiplication table of a given number.
#include <stdio.h>
int main()
{
    int n = 8;
    int mul;
    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
        printf("%d x %d = %d\n", n, i, mul);
    }
    return 0;
}