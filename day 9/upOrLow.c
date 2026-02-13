// WAP to check wheter a character is uppercase or lowercase.

#include <stdio.h>
int main (){
    char ch;
    ch = 'A';
    printf("%d\n", ch);
    if (ch>='A' && ch<='Z'){ // ASCII value of A is 65 and Z is 90
        printf("The character is uppercase.");
    }else if(ch>='a' && ch<='z'){ // ASCII value of a is 97 and z is 122
        printf("The character is lowercase.");
    }else{
        printf("The character is not an alphabet.");
    }

    return 0;
}