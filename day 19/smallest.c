// WAP to calculate the greatest of three numbers using function.

#include<stdio.h>
int greatest(int a, int b){
    if (a > b){
        return b;
    }else{
        return a;
    }
}
int main(){
    int x=40, y=50, z=30;
    int result = greatest(x,y);
    int result1 = greatest(result,z);
    printf("The greatest number is: %d", result1);
    return 0;
}