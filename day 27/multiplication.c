// WAP to accept two matrix from the user and find the product of two matrix.
#include<stdio.h>
int main(){
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1!=r2){
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int matrix1[r1][c1], matrix2[r2][c2], product[r1][c2];
    printf("Enter the elements of first matrix:\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the product matrix with zeros
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            product[i][j] = 0;
        }
    }
    
    // Multiply the matrices
    for(int i=0; i<r1; i++){ // Loop through rows of first matrix
        for(int j=0; j<c2; j++){ // Loop through columns of second matrix
            for(int k=0; k<c1; k++){ // Loop through columns of first matrix and rows of second matrix
                product[i][j] = product[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the product matrix
    printf("Product of the two matrices is:\n");
    for(int i=0; i<r1; i++){ // Loop through rows of product matrix
        for(int j=0; j<c2; j++){ // Loop through columns of product matrix
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}