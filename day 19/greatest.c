// WAP to calculate the greatest of three numbers using function.

#include<stdio.h>
int greatest(int a, int b, int c){
    if (a > b && a > c){
        return a;
    }
    else if (b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int x = 1, y = 2, z = 3;
    int result = greatest(x, y, z);
    int result1 = greatest(10, 20, 30);
    printf("The greatest number is: %d and %d", result, result1);
    return 0;
}