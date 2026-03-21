// WAP to reverse a string without using library function.
#include<stdio.h>
#include<string.h>
int main(){
    char name[]= "Bishal";
    int len = strlen(name);
    for(int i= 0; i<len/2;i++){
        char temp = name[i];
        name[i]= name[len-1-i];
        name[len-1-i]= temp;
    }
    printf("Reversed string is: %s", name);
    return 0;
}