// WAP to accepet the heights of 10 students and calculate the average height.
#include<stdio.h>
int main(){
    float height[10];
    float sum=0;
    float average;
    printf("Enter the heights of 10 students:\n");
    int length = sizeof(height) / sizeof(height[0]);
    // take input from the user and store it in the array
    for(int i = 0; i < length; i++){
        printf("Student %d: ", i + 1);
        scanf("%f", &height[i]);
    }
    // calculate the sum of the heights
    for(int i = 0; i < length; i++){
        sum += height[i]; // sum = sum + height[i];
    }
    average = sum / length;
    printf("The average height of the students is: %.2f\n", average);
    return 0;
}