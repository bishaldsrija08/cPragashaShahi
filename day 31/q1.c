// WAP to count no of vowels and consonants in a string.
#include<stdio.h>
int main(){
    char name[]= "Bishal";
    int VCount =0;
    int cCount =0;
    for(int i=0; name[i]!='\0'; i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u'){
            VCount++;
        }
        else{
            cCount++;
        }
    }
    printf("The number of vowels in the string is: %d", VCount);
    printf("\nThe number of consonants in the string is: %d", cCount);
    return 0;
}