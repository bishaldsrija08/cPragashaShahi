// WAP to find a sum of a digit.
#include<stdio.h>
int main(){
    int num = 32132;
    int sum = 0;
    int r;
    while (num>0)
    {
        r = num%10; // last digit of num
        sum = sum +r;
        num = num/10; // num = 12, 1, 0 remove last digit of num
    }
    printf("Sum of digit is %d.", sum);
    return 0;
}