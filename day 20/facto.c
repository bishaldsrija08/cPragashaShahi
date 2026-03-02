// WAP to find the factorial of a number using function.
#include<stdio.h>
int factorial(int n){
    int facto = 1;
    if(n==0 || n==1){
        return 1;
    } else{
        for(int i=1; i<=n; i++){
            facto = facto * i;
        }
    }
    return facto;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("Factorial of %d is %d", num, result);
    // return 0; // return helps to end the program and return control to the operating system. It also indicates that the program ended successfully.
    printf("\n");
    int result2 = factorial(10);
    printf("The factorial of %d is %d", 10, result2);
    return 0;
}