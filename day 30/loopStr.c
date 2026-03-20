#include<stdio.h>
int main(){
    char name[100] = "Hello World";
    // int size = sizeof(name)/sizeof(name[0]);
    for(int i=0; name[i]!='\0' ; i++){
        printf("%c ", name[i]);
    }
    /*
        for(int i=0; i<size; i++){
        printf("%c ", name[i]);
    }
    */
    return 0;
}

// I am living in Chitwan aka "City of Temples"