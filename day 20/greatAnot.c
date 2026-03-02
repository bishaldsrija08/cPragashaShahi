// WAP to input 3 numbers from the users and print the greatest number among them using a function.
#include<stdio.h>
int greatest(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    int g1 = greatest(x, y);
    int g2 = greatest(g1, z); 
    printf("The greatest number is: %d", g2);
    return 0;
}