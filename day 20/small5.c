// WAP to input 5 numbers from the users and print the smallest number among them using a function.
#include<stdio.h>
int smallest(int a, int b){
    if(a<b){
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
    int s1 = smallest(x, y);
    int s2 = smallest(s1, z);
    int s3 = smallest(s2, w);
    int s4 = smallest(s3, v);
    printf("The smallest number is: %d", s4);
    return 0;
}