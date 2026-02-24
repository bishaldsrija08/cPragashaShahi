#include<stdio.h>
void area(float l, float b){ // Function definition with parameters l and b
    float area = l*b;
    printf("Area of rectangle is: %f\n", area);
}
int main(){
    area(5,6); // Function call with arguments 5 and 6
    area(10,20); // Function call with arguments 10 and 20
    area(3.5,4.2); // Function call with arguments 3.5 and 4.2
    return 0;
}