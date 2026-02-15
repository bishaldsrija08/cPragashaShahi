// Input a number and print whether it is positive even, positive odd, negative even, or negative odd.
#include <stdio.h>
int main()
{
    int num = 0;
    if (num > 0) // Positive or negative -78
    {
        // positive even or odd
        if (num % 2 == 0)
        {
            printf("Positive even");
        }
        else
        {
            printf("Positive odd");
        }
    }
    else if (num < 0) // negative
    {
        // negative even or odd
        if (num % 2 == 0)
        {
            printf("Negative even");
        }
        else
        {
            printf("Negative odd");
        }
    }
    else
    {
        printf("Zero");
    }
    return 0;
}