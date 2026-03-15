#include<stdio.h>
int main(){
    int age = 45;
    int *ptr = &age;
    float pi = 3.14;
    float *ptr2 = &pi;
    char grade = 'A';
    char *ptr3 = &grade;

    printf("The value of age is %d\n", age);
    printf("The value of age using pointer is %p\n", ptr);
    
    printf("The value of pi is %f\n", pi);
    printf("The value of pi using pointer is %p\n", ptr2);

    printf("The value of grade is %c\n", grade);
    printf("The value of grade using pointer is %p\n", ptr3);
    return 0;
}