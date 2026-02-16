// WAP to print this series 5 55 555 5555 55555 ... upto n terms.#include<stdio.h>
# include<stdio.h>
int main(){
    int n = 5;
    for(int i =1; i<10; i++){
        printf("%d ", n);
        n = n*10 + 5;
    }

    return 0;
}