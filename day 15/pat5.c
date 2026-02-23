/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<stdio.h>
int main(){
    int lines = 5;
    int count =1; // to keep track of the numbers to be printed
    for(int i=1; i<=lines; i++){
        for(int j =1; j<=i; j++){
            printf("%d ",count);
            count++; // increment count after printing each number
        }
        printf("\n");
    }
    return 0;
}