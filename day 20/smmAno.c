// WAP to input 3 numbers from the users and print the smallest number among them using a function.
#include<stdio.h>
int smallest(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    int s1 = smallest(x, y);
    int s2 = smallest(s1, z); 
    printf("The smallest number is: %d", s2);
    return 0;
}