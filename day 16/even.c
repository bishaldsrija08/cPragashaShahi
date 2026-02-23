// WAP to print even up to 10.
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        if(i%2!=0){
            continue;
        }else{
            printf("%d ",i);
        }
    }
}