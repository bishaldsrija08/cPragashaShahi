/*

*
* *
* * *
* * * *
* * * * *

*/
#include<stdio.h>
int main(){
    int lines = 5;
    for(int i = 1; i<=lines; i++){ // outer loop
        for(int j =1; j<=i; j++){ // inner loop
            printf("* ");
        }
        printf("\n"); // new lines
    }
    return 0;
}