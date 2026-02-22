/*

* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
int main(){
    int lines = 5;
    for(int i = lines; i>0; i--){
        for(int j = 1; j<=5; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}