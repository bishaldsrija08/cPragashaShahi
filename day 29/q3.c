// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
#include<stdio.h>
void calcuate(int a, int b, int *sum, int *product, float *average){
    // sum, product and average
    *sum = a + b;
    *product = a * b;
    *average = (float)*sum / 2;
}

int main(){
    int a, b, sum, product;
    float average;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    calcuate(a,b, &sum, &product, &average);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average);
    return 0;
}