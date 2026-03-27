// WAP to find the sum of all digits using recursion.
// 1234 = 1 + 2 + 3 + 4 = 10
#include<stdio.h>
int sumOfDigits(int num){
    if(num==0){ // base case
        return 0;
    }
    return (num %10)+ sumOfDigits(num/10); // recursive case
}
int main(){
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = sumOfDigits(num);
    printf("The sum of digits is: %d", sum);
    return 0;
}