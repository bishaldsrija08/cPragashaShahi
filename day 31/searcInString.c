// WAP to check wheter a character is present in a string or not.
#include<stdio.h>
int main(){
    char name[]= "bishal";
    char ch='z';
    for(int i=0; name[i]!='\0';i++){
        if(name[i]==ch){
            printf("Character is present in the string");
            return 0;
        }
    }
    printf("Character is not present in the string");
    return 0;
}