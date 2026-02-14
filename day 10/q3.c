// WAP to print first 10 even numbers using for loop.
#include<stdio.h>
int main(){
    for(int i = 1; i<=10; i++){
        int even = 2*i;
        printf("%d ", even);

    }
    return 0;
}

// Another way to print first 10 even numbers using for loop.

// WAP to print first 10 even numbers using for loop.
#include<stdio.h>
int main(){
    int even = 2;
    for(int i = 1; i<=10; i++){
        printf("%d ", even);
        even = even+2;
    }
    return 0;
}