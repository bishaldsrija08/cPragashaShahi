/*Types of User-defined Functions
No argument, no return
Argument, no return
No argument, return
Argument, return*/

#include<stdio.h>
// No argument, no return
// This function does not take any arguments and does not return any value. It simply prints "Hello World" to the console.
void display(){
    printf("Hello World \n");
}

// Argument, no return
// This function takes an integer argument 'a' and does not return any value. It prints the value of 'a' to the console.
void display1(int a){
    printf("The value of a is %d\n",a);
}

// No argument, return
// This function does not take any arguments but returns an integer value. It returns the value 10.
int display2(){
    return 10;
}

// Argument, return
// This function takes two integer arguments 'a' and 'b', calculates their sum, and returns the result.
int display3(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    display();
    display1(10);
    int result = display2();
    printf("The value returned by display2 is %d\n",result);
    int sum = display3(5, 10);
    printf("The sum of 5 and 10 is %d\n",sum);
    return 0;
}