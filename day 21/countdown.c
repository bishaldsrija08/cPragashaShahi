// WAP to print 5 4 3 2 1 using recursion.
#include<stdio.h>
int countdown(int n){
    if(n>0){
        printf("%d ",n);
        countdown(n-1); // Recursive call with n-1
    }
}
int main(){
    int n=10;
    countdown(n);
    return 0;
}