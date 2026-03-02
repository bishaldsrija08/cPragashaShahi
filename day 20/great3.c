// WAP to input 3 numbers from the users and print the greatest number among them using a function.
#include<stdio.h>
void greatest(int a, int b, int c){
    if(a > b && a > c){
        printf("%d is the greatest number.", a);
    }
    else if(b > a && b > c){
        printf("%d is the greatest number.", b);
    }
    else{
        printf("%d is the greatest number.", c);
    }
}
int main(){
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    greatest(x, y, z);
    printf("\n");
    printf("Enter another set of three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    greatest(x, y, z);
    return 0;
}