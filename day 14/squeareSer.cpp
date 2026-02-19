//WAP to print a series: 4+9+16+ .. nth term
#include <stdio.h>
int main() {
	int n =10;
	int sq;
	int  sum = 0;
	for(int i =2;i<=n;i++){
		sq = i*i;
		sum = sum + sq;
		printf("%d ", sq);
	}
	printf("\n%d is sum", sum);
    return 0;
}


//WAP to print a series: 1+4+9+16+ .. nth term
#include <stdio.h>
int main() {
	int n =10;
	int sq;
	int  sum = 0;
	for(int i =1;i<=n;i++){
		sq = i*i;
		sum = sum + sq;
		printf("%d ", sq);
	}
	printf("\n%d is sum", sum);
    return 0;
}


