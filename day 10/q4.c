// WAP to print first 10 odd numbers using for loop.
#include<stdio.h>
int main(){
    for (int i = 1; i <=10; i++){
        printf("%d ", 2*i-1);
    }
    return 0;
}



// WAP to print first 10 odd numbers using for loop.
#include<stdio.h>
int main(){
    int odd =1;
    for (int i = 1; i <=10; i++){
        printf("%d ", odd);
        odd += 2;
    }
    return 0;
}