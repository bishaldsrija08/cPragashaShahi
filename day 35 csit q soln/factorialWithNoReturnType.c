// WAP to calculate factorial of a number using function with no return type with argument.

#include<stdio.h>
void factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    printf("Factorial of %d is %d", n, fact);
    // 1+2+3+4+5 = 15
    // 1*2*3*4*5 = 120
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n);
    return 0;
}