// WAP to find the factorial of a number using recursion.
#include<stdio.h>
int fact(int n){
    if(n==0 || n==1){ // Base case: The factorial of 0 and 1 is 1.
        return 1;
    }
    return n*fact(n-1); // n! = n * (n-1)! where (n-1)! is the factorial of (n-1)
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n",n,fact(n));
    return 0;
}