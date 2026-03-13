// WAP to accept mxn matrix from the user and display it.
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int matrix[m][n];
    // Accept the elements of the matrix from the user
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    // Display the matrix
    printf("The matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
    int matrix[2][3] = { {1, 4, 2},
                        {3, 6, 8} };
*/