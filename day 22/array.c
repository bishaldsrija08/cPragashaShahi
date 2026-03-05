#include<stdio.h>
int main(){
    int comp = 45;
    int eng = 67;
    int sci = 56;
    int math = 78;

    int marks[6] ={45, 67, 56, 78, 89,1};
    // dataType arrayName[size]= {values}

    printf("%d \n", marks[0]); // getting the value of 0th index
    // printf("%d \n", marks[1]);
    // printf("%d \n", marks[2]);
    // printf("%d \n", marks[3]);
    // printf("%d \n", marks[4]);

    marks[3] = 90; // changing the value of 3rd index
    printf("%d \n", marks[3]);

    // size of an array
    printf("%d \n", sizeof(marks));

    // length of an array
    int length = sizeof(marks)/sizeof(marks[0]); //24/4 =6

    for(int i =0; i<length; i++){ // 5
        printf("%d \n", marks[i]);
    }
    return 0;
}