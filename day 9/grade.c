/*
Write a C program that asks the user to enter their marks (from 0 to 100) and displays the corresponding grade based on the following conditions:

If marks are between 90 and 100 (inclusive), print Grade: A

If marks are between 70 and 89, print Grade: B

If marks are between 30 and 69, print Grade: C

If marks are between 0 and 29, print Grade: F

If the user enters marks outside the range 0–100, print Invalid marks entered.
*/

#include <stdio.h>
int main(){
    float marks;
    marks = 250;
    if(marks>90 && marks<=100){
        printf("Grade: A");
    }else if(marks>70 && marks<=90){
        printf("Grade: B");
    }else if(marks>30 && marks<=70){
        printf("Grade: C");
    }else if(marks>=0 && marks<=30){
        printf("Grade: F");
    }else{
        printf("Invalid marks entered");
    }
    return 0;
}