// Write a program to find the area of a circle.
#include<stdio.h>
void area(float r);
int main(){
    area(5.0);
    area(10.0);
    return 0;
}

void area(float r){
    float a = 3.14*r*r;
    printf("Area of circle is %f\n",a);
}