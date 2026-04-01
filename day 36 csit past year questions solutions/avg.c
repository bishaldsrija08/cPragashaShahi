// Write C program to enter numbers until user press 0 and display sum and average of entered number.
#include<stdio.h>
int main(){
    float avg;
    int sum = 0;
    int count = 0;
    int num;
    printf("Enter numbers (press 0 to stop):\n");
    while(1){
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        sum += num;
        count++;
    }
    if(count>0){
        avg = (float)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", avg);
    } else {
        printf("No numbers entered.\n");
    }
}