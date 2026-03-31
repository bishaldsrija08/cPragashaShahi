// WAP to Search element in any array taking input form the user
#include<stdio.h>
int main(){
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Enter a array items: \n");
    for(int i=0;i<length;i++){
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter the number to search: ");
    scanf("%d", &num);
    for(int i=0; i<length; i++){
        if(arr[i]==num){
            printf("Number found at index: %d\n", i);
            return 0;
        }
    }
    printf("Number not found.\n");
    return 0;
}