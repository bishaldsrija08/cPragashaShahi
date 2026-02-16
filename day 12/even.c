// WAP to print even numbers from 1 to 100 using for loop.
#include <stdio.h>
int main()
{
    int i = 1;
    // int even = 2;
    while (i <= 50)
    {
        if(i % 2 ==0){
            printf("%d ", i);
        }
        // printf("%d ", even);
        // even += 2;
        i++;
    }

    return 0;
}