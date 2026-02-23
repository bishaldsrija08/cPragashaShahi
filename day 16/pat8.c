/*

     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5

*/

#include <stdio.h>
int main(){
    int lines = 5;
    for(int i =1; i<=lines; i++){

        // space
        for(int j =1; j<=lines-i; j++){
            printf(" ");
        }

        // number
        for(int k =1; k<=i; k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}