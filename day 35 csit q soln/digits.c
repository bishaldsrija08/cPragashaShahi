// WAP to print first and last digit of a accepeted number.
#include<stdio.h>
int main(){
    int num, firstDigit, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10; // Get the last digit
    firstDigit = num; // Initialize firstDigit with the original number
    while(firstDigit>10){ //1
        firstDigit /= 10; // Remove the last digit until only the first digit remains
    }
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    return 0;
}