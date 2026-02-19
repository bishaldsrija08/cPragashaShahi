// WAP to print the following series: 1/1! + 2/2! + 3/3! + 4/4! + .... + 10/10!

#include <stdio.h>

int main() {
	int fact = 1;
	float sum = 0;
	for(int i = 1; i<=10; i++){
		fact = fact*i;
		sum = sum + (i/fact);
		printf("%d/%d ", i, fact);
	}
	printf("\n");
	printf("The sum of series is %f.",sum);
	return 0;
}
