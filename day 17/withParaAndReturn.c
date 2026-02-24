#include<stdio.h>
int add(int a, int b){ // a and b are parameters
    int sum = a+b;
    printf("Abc\n");
    return sum; // return is used to send the value back to the caller of the function
}
int main(){
//    int result =  add(5,6); // 5 and 6 are arguments
    printf("The sum is: %d\n", add(5,6));
    return 0;
}