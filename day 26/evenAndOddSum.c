// WAP to accept a m into n matrix from the user and calculate sum of even and odd elements in the matrix and display the result.
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int matrix[m][n];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    // Calculate sum of even and odd elements
    int evenSum=0, oddSum=0;
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            int eachItem = matrix[i][j];
            if(eachItem % 2 ==0){
                evenSum = evenSum + eachItem;
            }else{
                oddSum = oddSum + eachItem;
            }
        }
    }
    // Display the result
    printf("Sum of even elements: %d\n", evenSum);
    printf("Sum of odd elements: %d\n", oddSum);
    return 0;
}