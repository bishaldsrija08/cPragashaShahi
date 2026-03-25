// WAP to enter n numbers in an array and search for a number in that array
#include<stdio.h>
int main(){
    int n[5];
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++){
        scanf("%d", &n[i]);
    }
    int search;
    printf("Enter a number to search: ");
    scanf("%d", &search);
    for(int i=0;i<5;i++){
        if(n[i]==search){
            printf("Number found");
            return 0;
        }
    }
    printf("Number not found");
    return 0;
}