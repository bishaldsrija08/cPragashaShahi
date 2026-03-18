// SWAP TWO NUMBERS USING POINTERS
#include<stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside swap function: x = %d, y = %d\n", *x, *y);
}

int main(){
    int a =5, b=6;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}