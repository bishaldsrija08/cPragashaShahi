// WAP to Search element in list of 10 numbers.
#include<stdio.h>
int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int num;
    printf("Enter the number to search: ");
    scanf("%d", &num);
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<length; i++){
        if(arr[i]==num){
            printf("Number found at index: %d\n", i);
            return 0;
        }
    }
    printf("Number not found.\n");
    return 0;
}