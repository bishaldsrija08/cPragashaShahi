// WAP to print fibonacci series up to n terms.
#include<stdio.h>
int fibo(int n){
    if(n==0){ // base case
        return 0;
    }else if(n==1){ // base case
        return 1;
    }else{
        return fibo(n-1)+fibo(n-2); // recursive case: the nth term is the sum of the (n-1)th and (n-2)th terms
    }
}
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series up to %d terms: ", n);
    for(int i=0;i<n;i++){
        int result = fibo(i);
        printf("%d ", result);
    }
    return 0;
}