// WAP to print sum of 10 natural numbers using recursion.
#include<stdio.h>
int sum(int n){
    if(n==1){ // base case
        return 1;
    }
    return n + sum(n-1); // recursive case
}
int main(){
    int result = sum(10);
    printf("Sum of 10 natural numbers is: %d\n", result);
    return 0;
}