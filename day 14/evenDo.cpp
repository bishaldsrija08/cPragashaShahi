//WAP to print first 10 even numbers.
#include<stdio.h>
int main(){
	int i =1;
	int even = 2;
	do{
		printf("%d ", even);
		i++;
		even+=2; // even = even + 2
	}while(i<=10);
    return 0;
}
