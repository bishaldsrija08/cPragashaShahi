#include <stdio.h>
int main()
{
    float a, b, c;
    a = 5;
    b = 2;
    c = a / b; // 5/2 = 2.5 but since c is an integer, it will store only the integer part which is 2
    float d = 6;
    int e = 6.99; // 6.99 is a float but since e is an integer, it will store only the integer part which is 6
    printf("%f\n", c);
    printf("%f\n", d);
    printf("%d\n", e);
    return 0;
}