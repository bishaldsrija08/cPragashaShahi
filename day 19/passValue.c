#include<stdio.h>
void changeValue(int a){
    a = 20;
    printf("Inside changeValue function, a = %d\n", a);
}
int main(){
    int a =10;
    printf("Before changeValue function call, a = %d\n", a);
    changeValue(a);
    printf("After changeValue function call, a = %d\n", a);
    return 0;
}