#include<stdio.h>
#include<string.h>
int main(){
    char name[50] = "HELLO, BISHAL";
    strlwr(name); // Converts the string to lowercase
    printf("%s", name);
    return 0;
}