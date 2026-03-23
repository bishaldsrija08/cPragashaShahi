// Demonstrate a use defined function in C with return value.
#include<stdio.h>
float areaOfCircle(float r){
    float area = 3.14*r*r;
    return area;
}

int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float result = areaOfCircle(radius);
    printf("The area of the circle is: %f", result);

    return 0;
}