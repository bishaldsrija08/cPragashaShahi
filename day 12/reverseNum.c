// WAP to reverse a number.
#include<stdio.h>
int main(){
    int num = 123;
    int rev = 0;
    int r;
    while (num>0)
    {
        r = num%10; // last digit of num
        rev = rev*10 + r; //rev = 3, 32,  321 calculate reverse number
        num = num/10; // num = 12, 1, 0 remove last digit of num
    }
    printf("Reversed number: %d\n", rev);
    return 0;
}