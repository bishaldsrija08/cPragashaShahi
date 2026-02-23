#include<stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        if(i==5){
            continue; // when i is 5, the loop will skip the remaining code in the loop and continue with the next iteration of the loop. It will not exit the loop, but it will skip the current iteration and move on to the next one.
        }
        printf("%d ",i);
    }
    
    return 0;
}