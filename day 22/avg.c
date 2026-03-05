// WAP to calculate the average of 5 numbers using array.
#include<stdio.h>
int main(){
    int arr[5]= {23, 45, 67, 89, 12};
    int length = sizeof(arr)/sizeof(arr[0]);
    int sum =0;
    float avg;
    for(int i=0; i<length; i++){
        sum += arr[i]; // sum = sum + arr[i];
    }
    avg = (float)sum/length; // typecasting
    printf("The average of the numbers is: %.2f", avg);
    return 0;
}