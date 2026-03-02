// WAP to input 5 numbers from the users and print the greatest number among them using a function.
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
    int x, y, z, w, v;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &x, &y, &z, &w, &v);
    int g1 = greatest(x, y);
    int g2 = greatest(g1, z);
    int g3 = greatest(g2, w);
    int g4 = greatest(g3, v);
    printf("The greatest number is: %d", g4);
    return 0;
}