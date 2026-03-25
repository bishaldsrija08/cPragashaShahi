// Example of strcmp() function in C
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Hello CC";
    char str2[] = "Hello D";
    if(strcmp(str1, str2)>0){
        printf("The string str1 is greater than str2.\n");
    }
    else{
        printf("The string str1 is not greater than str2.\n");
    }
    return 0;
}