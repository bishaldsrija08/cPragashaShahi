/*

* * * * *
 * * * *
  * * *
   * *
    *

*/

#include <stdio.h>
int main(){
    int lines = 5;

    for(int i=lines; i>=1; i--){
        // space
        for(int j =1; j<=lines -i; j++){ // inner loop for space
            printf(" ");
        }

        // stars
        for(int k =1; k<=i; k++){ // inner loop for stars
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}