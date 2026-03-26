// WAP to calcuale area of cube using math function
#include<stdio.h>
#include<math.h>
int main(){
    int l;
    double area;
    printf("Enter the length of cube: ");   
    scanf("%d",&l);
    area = 6*pow(l,2);
    printf("Area of cube is: %.2lf",area);
    
    return 0;
}