#include<stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        if(i==5){
            break; // when i is 5, the loop will break and it will not execute the remaining code in the loop. It will exit the loop and continue with the next statement after the loop.
        }
        printf("%d ",i);
    }
    return 0;
}