// WAP to find the greatest in an array of 10 numbers.[IMP question]
#include<stdio.h>
int main(){
    int arr[10];
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Enter 10 numbers: ");
    for(int i=0; i<length; i++){
        scanf("%d", &arr[i]);
    }
    int greatest = arr[0];
    for(int i =1; i<length; i++){
        if(arr[i]>greatest){
            greatest = arr[i];
        }
    }
    printf("The greatest number in the array is: %d", greatest);
    
    return 0;
}