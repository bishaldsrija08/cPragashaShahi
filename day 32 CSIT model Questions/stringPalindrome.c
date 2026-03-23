// WAP to check whether a string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for(int i=0; i<len/2; i++){
        if(str[i]!=str[len-1-i]){
            printf("The string is not a palindrome.");
            return 0;
        }
    }
    printf("The string is a palindrome.");

    return 0;
}