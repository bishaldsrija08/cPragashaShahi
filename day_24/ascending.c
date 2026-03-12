// WAP to accept a n numbers from the user and sort them in ascending order and display the sorted numbers.
#include<stdio.h>
int main(){
    int n;
    // eg[10]= {1, 5, 3, 9, 2, 8, 4, 7, 6, 0}; // sorted array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the elements: ");
    // Accepting the elements from the user
    for(int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    // Sorting the elements in ascending order
    for(int i=0; i<length-1; i++){
        for(int j=i+1; j<length; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    // Displaying the sorted elements
    printf("Sorted elements in ascending order: ");
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
            /*
            Dry run
            1>5, 1>3,1>9,1>2,1>8,1>4,1>7,1>6,1>0
            temp = 1,
            arr[0]= 0,
            arr[9]=1
            5>3, 3>9, 3>2, 2>8, 2>4, 2>7, 2>6, 2>1
            arr[2] = 1           
            */