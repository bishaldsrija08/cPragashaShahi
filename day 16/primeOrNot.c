// WAP to check whether a number is prime or not.
//  Imp for exam
#include<stdio.h>
int main(){
    int n=7;
    int isPrime =1; // Assume the number is prime until we find a divisor
    for(int i=2; i<n; i++){ 
        if(n%i ==0){
            isPrime = 0; // Found a divisor, so it's not prime
            break;
        }
    }
    if(isPrime){
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);   
    }
    
    return 0;
}