#include<stdio.h>
int main(){
    char str[]= "Hello World";
    // str = "Bye World"; // This will cause an error because str is an array and cannot be assigned a new value
    char *str1 = "Bishal Rijal";
    str1 = "Bye World"; // This is valid because str1 is a pointer and can point to a new string
    puts(str1); // This will print "Bye World"
    return 0;
}