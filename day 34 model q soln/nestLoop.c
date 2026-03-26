// Nested loop example

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<stdio.h>
int main(){
    int lines = 5;
    for(int i=1; i<=lines;i++){ // outer loop to track lines
        for(int j=1; j<=i; j++){
            printf("%d ", j); // inner loop to print numbers in each line
        }
        printf("\n"); // move to the next line after each line is printed
    }
    return 0;
}