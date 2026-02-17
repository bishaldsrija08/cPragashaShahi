// WAP to find a numbers of a digit.
#include<stdio.h>
int main(){
    int num = 12344321;
    int count = 0;
    while (num>0)
    {
        count++; // count = 1, 2, 3, 4, 5
        num = num/10; // num = 12, 1, 0 remove last digit of num
    }
    printf("Number of digits is %d", count);
    return 0;
}