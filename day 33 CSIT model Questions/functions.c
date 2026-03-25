/*Types of User-defined Functions
No argument, no return
Argument, no return
No argument, return
Argument, return*/

#include<stdio.h>
// No argument, no return
void display(){
    printf("Hello World \n");
}

// Argument, no return
void display1(int a){
    printf("The value of a is %d\n",a);
}

// No argument, return
int display2(){
    return 10;
}

// Argument, return
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