// WAP to check whether a number is an Armstrong number.
#include <stdio.h>
int main()
{
    int num = 153;
    int org = num;
    int arm = 0;
    int r;
    while (num > 0)
    {
        r = num % 10;          // last digit of num
        arm = arm + r * r * r; // arm = 0 + 3*3*3 = 27, arm = 27 + 2*2*2 = 35, arm = 35 + 1*1*1 = 36
        num = num / 10;        // num = 12, 1, 0 remove last digit of num
    }
    if (org == arm)
    {
        printf("%d is an armstrong number", org);
    }
    else
    {
        printf("%d is not an armstrong number", org);
    }

    return 0;
}