#include<stdio.h>
int main(){
    char name[100];
    printf("Enter your name: ");
    fgets(name, 100, stdin); // fgets is safer than gets as it allows you to specify the maximum number of characters to read, preventing buffer overflow
    puts(name); // prints the string followed by a newline
    return 0;
}