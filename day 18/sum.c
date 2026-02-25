#include<stdio.h>
void printSum(){
    int x=6, y=7, sum;
    sum = x+y;
    printf("The sum of %d and %d is %d", x, y, sum);
}
int main(){
    printSum();
    return 0;
}