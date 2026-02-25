// returnType functionName(parameter1, parameter2, parameter3) {
//   // code to be executed
// }

void area(int r){
    float pi = 3.14;
    float area;
    area = pi*r*r;
    printf("The area of the circle is: %f\n", area);
}

#include<stdio.h>
int main(){
    area(5);
    area(10);
    return 0;
}