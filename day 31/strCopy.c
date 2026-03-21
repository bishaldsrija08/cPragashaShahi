#include<stdio.h>
#include<string.h>
int main(){
    char name[]= "Bishal";
    char copyName[]= "Pragasha";
    strcpy(copyName, name);
    printf("Copied name is: %s", copyName);
    return 0;
}