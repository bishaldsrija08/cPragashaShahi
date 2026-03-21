#include<stdio.h>
#include<string.h>
int main(){
    char name[]= "Bishal ";
    char sirName[]= "Shrestha";
    strcat(name, sirName);
    printf("Full name is: %s", name);
    return 0;
}