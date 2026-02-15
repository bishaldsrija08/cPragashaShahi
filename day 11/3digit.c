// 13.Input a number and check whether it is a three-digit number.
#include<stdio.h>
int main(){
    int num = 480;
    if(num>=100 && num<=999){
        printf("%d is a three-digit number.", num);
    }
    else{
        printf("%d is not a three-digit number.", num);
    }
    return 0;
}