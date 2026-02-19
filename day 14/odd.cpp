//WAP to print first 10 odd numbers using do.
#include<stdio.h>
int main(){
	int odd=1;
	int i = 1;
	do{
	printf("%d ", odd);
	i++;
	odd+=2; // odd= odd+2;
	}while(i<=10);
    return 0;
}
