// Write a C program to calculate the area of a circle given its radius using function.
#include<stdio.h>
void areaOfCircle(float r){
    float area = 3.14 * r * r;
    printf("Area of circle with radius %.2f is %.2f\n", r, area);
}
int main(){
    areaOfCircle(5.0);
    areaOfCircle(10.0);
    return 0;
}