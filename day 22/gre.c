// WAP to find the greatest in an array of 10 numbers.[IMP question]
#include<stdio.h>
int main(){
    int arr[10] = {45, 67, 56, 78, 1, 10, 23, 34, 12, 9};
    int greatest = arr[0]; // 45
    int length = sizeof(arr)/sizeof(arr[0]); // 40/4 = 10
    for(int i =1; i<length; i++){
        if(arr[i]>greatest){ // 67>45, 56>67, 78>67, 1>78, 10>78, 23>78, 34>78, 12>78, 9>78
            greatest = arr[i]; // greatest = 67, 67, 78, 78, 78, 78, 78, 78, 78
        }
    }
    printf("The greatest number in the array is: %d", greatest);
    
    return 0;
}