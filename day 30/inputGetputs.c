#include<stdio.h>
int main(){
    char name[100];
    printf("Enter your name: ");
    gets(name); // gets is unsafe and can lead to buffer overflow, it's better to use fgets instead
    puts(name); // prints the string followed by a newline
    return 0;
}