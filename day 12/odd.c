// WAP to print odd numbers from 1 to 100 using for loop.
#include <stdio.h>
int main()
{
    int i = 1;
    // int odd = 1;
    while (i <= 50)
    {
        if(i%2!=0){
            printf("%d ", i);
        }

        // printf("%d ", odd);
        // odd += 2;
        i++;
    }

    return 0;
}