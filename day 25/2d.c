#include<stdio.h>
int main(){
    // int matrix[row][col]
    int bishal[2][3] = { {1, 4, 2},
                        {3, 6, 8} };
    int pragasha[3][3] = {{1,2,3},
                          {4,5,6},
                          {7,8,9}};
    int mat[2][2]= {
        {1,2},
        {3,4}
    };
    
    int mat2[3][2] ={{1,2},
                    {3,4},
                    {5,6}};

    for(int i=0; i<2; i++){ // row
        for(int j =0 ; j<3; j++){ // col
            printf("%d ", bishal[i][j]);
        }
        printf("\n");
    }
    return 0;
}