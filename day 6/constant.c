#include<stdio.h>
int main(){
    int a;
    a= 67;
    printf("%d\n", a);
    a = 99;
    printf("%d\n", a);
    const float PI = 3.14; // constant value is stored in variable pi
    printf("%f\n", PI);
    PI = 56; // error: assignment of read-only variable 'pi'
    printf("%f\n", PI);
    return 0;
}