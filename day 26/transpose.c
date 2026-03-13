// WAP to accept mxn matrix from the user and display its transpose.
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");  
    // Accept the elements of the matrix from the user
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    // Display the transpose of the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}

/*
    int matrix[2][3] = { {1, 4, 2},
                        {3, 6, 8} };
*/