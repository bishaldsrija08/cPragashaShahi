#include<stdio.h>
int main(){
    float a=10.5;
    float *ptr=&a;
    float **pptr=&ptr;
    printf("The value of a is %f\n", a);
    printf("The value of a is %f\n", *ptr);
    printf("The value of a is %f\n", **pptr);
    return 0;
}