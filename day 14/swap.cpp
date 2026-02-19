// WAP to swap two numbers with out using temporary variable.
#include<stdio.h>
int main(){
	int a = 5;
	int b = 10;
	printf("Before: a = %d, b= %d\n", a,b);
	a = a+b; // *
	b= a-b; // /
	a= a-b; // /
	printf("After: a = %d, b= %d\n", a,b);
    return 0;
}
