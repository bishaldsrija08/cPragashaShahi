// WAP to find the first and last digit of a number and test first digit is multiple of last digit or not.
#include <stdio.h>
int main()
{
    int num = 4232;
    int last = num % 10; // last digit of num
    int first = num;

    while (first >= 10)
    { // loop until first is a single digit number
        first = first / 10;
    }
    printf("First digit: %d\n", first);
    printf("Last digit: %d\n", last);

    if (first % last == 0)
    {
        printf("First digit is a multiple of last digit\n");
    }
    else
    {
        printf("First digit is not a multiple of last digit\n");
    }

    return 0;
}