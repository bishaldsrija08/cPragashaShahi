// Write 'C' program to display prime numbers between 100 to 400.
#include <stdio.h>
int main(){
    for(int i=100; i<=400; i++){
    for(int j=2; j<=i/2; j++){
        if(i%j==0){
            break;
        }else if(j==i/2){ // If the loop completes without finding a divisor, it means 'i' is prime
            printf("%d ", i);
        }
    }

    }
    return 0;
}