#include<stdio.h>
int main(){
    char name[100] = "Hello World";
    name[0] = 'B';
    printf("%s", name);
    return 0;
}