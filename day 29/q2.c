// Print the value of i using pointer to pointer.
#include<stdio.h>
int main(){
    int i =10; // value of i is 10
    int *ptr = &i; // ptr is a pointer to an integer, it holds the address of i
    int **ptr2 = &ptr; // pointer to pointer - ptr2 holds the address of ptr
    printf("The value of i is %d\n", **ptr2); // using ** operator to get the value at the address stored in ptr2, which is the address of ptr, and then dereferencing it to get the value of i
    return 0;
}