#include<stdio.h>
void changeValue(int x){
    x = 10;
    printf("The value of x inside the function is: %d\n", x);
}

int main(){
    int x = 6;
    printf("The value of x before calling is: %d\n", x);
    changeValue(x);
    printf("The value of x after calling is: %d\n", x);

    return 0;
}