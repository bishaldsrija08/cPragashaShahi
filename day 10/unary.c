#include<stdio.h>
int main(){
    int n = 2;
    // prefix increment
    printf("Prefix increment: %d %d\n",n, ++n); // n becomes 1,

    // postfix increment
    int a = 2;
    printf("Postfix increment: %d %d\n",a, a++); // a becomes 1, but the value printed is 2
    
    return 0;
}