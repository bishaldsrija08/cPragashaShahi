// First and Last Digit of 4-digit Number
#include<stdio.h>
int main(){
    int n;
    int lastDigit;
    int firstDigit;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    if(n<=1000 || n>=9999){
        printf("Invalid input! Please enter a 4-digit number.");
        return 0;
    }else{
         lastDigit = n%10;
         firstDigit = n/1000;
    }
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    return 0;
}