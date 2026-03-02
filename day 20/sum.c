// Inline function
#include<stdio.h>
inline int sum(int a, int b){
    return a+b;
}
int main(){
    int result = sum(5, 10);
    printf("Sum is %d\n", result);
    return 0;
}