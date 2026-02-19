//WAP to calculate factorial using do while.

#include<stdio.h>
int main(){
	int n=10;
	int fact = 1;
	int i = 1;
	do{
		fact = fact *i; // 1, 2, 6, 24, 120 (5! = 5x4x3x2x1)
		i++;
	}while(i<=n);
	printf("%d", fact);

    return 0;
}
