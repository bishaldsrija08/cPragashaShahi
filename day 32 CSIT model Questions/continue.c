#include<stdio.h>
int main(){
    for(int i=0; i<5; i++){
        if(i==3){
            continue; // This will skip the rest of the loop when i is 3 and continue with the next iteration
        }
        printf("%d ", i);
    }
    return 0;
}