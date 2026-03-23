#include<stdio.h>
int main(){
    for(int i=0; i<5; i++){
        if(i ==3){
            break; // This will exit the loop when i is 3
        }
        printf("%d ", i);
    }
    return 0;
}