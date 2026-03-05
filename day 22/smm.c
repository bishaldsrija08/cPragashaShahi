// WAP to find the smallest in an array of 10 numbers.[IMP question]
#include<stdio.h>
int main(){
    int arr[10] = {45, 67, 56, 78, 1, 10, 23, 34, 12, 9};
    int smallest = arr[0]; // 45
    int length = sizeof(arr)/sizeof(arr[0]); // 40/4 = 10
    for(int i =1; i<length; i++){
        if(arr[i]<smallest){ // 1<45
            smallest = arr[i];
        }
    }
    printf("The smallest number in the array is: %d", smallest);
    
    return 0;
}