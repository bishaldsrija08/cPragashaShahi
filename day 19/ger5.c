// WAP to calculate the greatest of five numbers using function.

#include<stdio.h>
int greatest(int a, int b){
    if (a > b){
        return b;
    }else{
        return a;
    }
}
int main(){
    int x=40, y=50, z=30, a=10, b=20, c=300;
    int result = greatest(x,y);
    int result1 = greatest(result,z);
    int result2= greatest(result1, a);
    int result3= greatest(result2, b);
    int result4= greatest(result3, c);
    printf("The greatest number is: %d", result4);
    return 0;
}