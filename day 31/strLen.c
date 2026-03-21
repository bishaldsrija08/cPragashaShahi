// WAP to calcualte string length making own function.
#include<stdio.h>
void countChar(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    printf("Length of the string is: %d", count);
}
int main(){
    char name[]= "Bishal";
        countChar(name);
    return 0;
}