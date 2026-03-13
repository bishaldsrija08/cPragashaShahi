// WAP to accept a 4x4 matrix from the user and find the sum of the all elements of the matrix.
#include<stdio.h>
int main(){
    int matrix[4][4];
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    // Finding the sum of all elements
    int sum = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
                sum += matrix[i][j];
        }
    }

    printf("The sum of all elements is: %d\n", sum);
    return 0;
}

// 4x4 matrix up to 16 numbers
// matrix[4][4] = {
//     {1, 2, 3, 4},
//     {5, 6, 7, 8},
//     {9, 10, 11, 12},
//     {13, 14, 15, 16}
// };