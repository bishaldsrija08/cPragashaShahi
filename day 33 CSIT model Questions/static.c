#include <stdio.h>

// Function with static variable
int fun(){
  	static int count = 0;
    count++;
    return count;
}
int main(){
    printf("%d ", fun());
    printf("%d ", fun());
  	printf("%d ", fun());
    return 0;
}