// WAP to calculate area of rectangle
#include<stdio.h>
int main(){
    int length, breadth, area;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    area = length + breadth; // Logical error: should be length * breadth
    printf("Area of rectangle: %d", area);
    return 0;
}