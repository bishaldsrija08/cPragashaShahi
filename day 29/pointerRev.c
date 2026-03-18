#include<stdio.h>
int main(){
    // *ptr = value at the address stored in ptr
    // &age = address of age variable
    int age=10;
    int *ptr = &age;
    int _ptr = *ptr; // *ptr gives the value at the address stored in ptr, which is the value of age
    // * is a dereference operator, it gives the value at the address stored in ptr
    printf("Value of age: %d\n", age); // Value
    printf("Address of age: %p\n", ptr); // Address
    printf("Value at ptr: %d\n", _ptr); // Value at the address stored in ptr
    printf("Address of ptr: %p\n", &ptr); // Address of ptr variable
    // %p is used to print the address in hexadecimal format
    printf("Address of age is %u", &age); // Address of age variable in unsigned integer format
 
    return 0;
}