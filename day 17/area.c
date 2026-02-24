#include<stdio.h>
void area(){
    float l =6, b = 6;
    float area = l*b;
    printf("Area of rectangle is %f\n", area);
}
int main(){
    for(int i = 1; i<=5; i++){
        area();
    }

    return 0;
}