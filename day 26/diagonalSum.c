// WAP to accept a mxn matrix from the user and find the sum of the diagonal elements of the matrix. [Left to Right Diagonal]
#include<stdio.h>
int main(){
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    // Finding the sum of the diagonal elements
    int sum = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                sum += matrix[i][j];
            }
        }
    }
    // for(int i=0; i<m && i<n; i++){
    //     sum += matrix[i][i];
    // }
    printf("The sum of the diagonal elements is: %d\n", sum);
    return 0;
}