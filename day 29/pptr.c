#include<stdio.h>
int main(){
    int age= 34;
    int *ptr = &age;
    int **ptr2 = &ptr;
    printf("The value of age is %d\n", age);
    printf("The value of age is %d\n", *ptr);
    printf("The value of age is %d\n", **ptr2);
    printf("The address of age is %p\n", &age);
    printf("The address of ptr is %p\n", &ptr);
    printf("The address of ptr2 is %p\n", &ptr2);
    return 0;
}