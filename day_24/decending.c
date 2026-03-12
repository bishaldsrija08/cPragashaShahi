// WAP to accept a n numbers from the user and sort them in descending order and display the sorted numbers.
#include<stdio.h>
int main(){
    int n;
    // eg[10]= {1, 5, 3, 9, 2, 8, 4, 7, 6, 0}; // sorted array: 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the elements: ");
    // Accepting the elements from the user
    for(int i = 0; i < length-1; i++){
        scanf("%d", &arr[i]);
    }
    // Sorting the elements in descending order
    for(int i=0; i<length-1; i++){
        for(int j=i+1; j<length; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    // Displaying the sorted elements
    printf("Sorted elements in descending order: ");
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}