#include<stdio.h>
int main(){
    int a = 5, b = 2;
    printf("a && b = %d\n", a>b && a<b); // Logical AND
    printf("a || b = %d\n", a>b || a<b); // Logical OR
    printf("Not of a>b = %d", !(a>b)); // Logical NOT
    return 0;
}