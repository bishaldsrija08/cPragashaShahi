// WAP to check whetehr a number is prime or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 0;
    for(int i=1; i<=n; i++){ // 5/1, 5/2, 5/3, 5/4, 5/5
        if(n%i ==0){
            count++; // 1, 2
        }
    }
    if(count > 2){ //2>2
        printf("%d is not a prime number.", n);
    }
    else{
        printf("%d is a prime number.", n);
    }
    return 0;
}