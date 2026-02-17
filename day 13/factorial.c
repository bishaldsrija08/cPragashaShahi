// Wap to find the factorial of a number using for loop.
#include<stdio.h>
int main(){
    int n = 5;
    int facto = 1;
    for(int i =1; i<=n; i++){
        facto = facto *i; //1, 2, 6, 24, 120
    }
    printf("The factorial of %d is %d", n, facto);
    return 0;
}