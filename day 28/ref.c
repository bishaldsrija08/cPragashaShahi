#include<stdio.h>

void _square(int *n);
int main(){
    int num = 6; //36
    printf("Square outside function: %d\n", num);
    _square(&num);
    printf("Square outside function using call by reference: %d\n", num); // 36
    return 0;
}


void _square(int *n){   
    *n = (*n) * (*n);
    printf("Square inside function using call by reference: %d\n", *n); //36
}