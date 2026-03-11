// WAP to accept a 10 students marks and count as between 20 and 25.
#include<stdio.h>
int main(){
    int marks[10], count =0;
    int length = sizeof(marks)/sizeof(marks[0]);
    printf("Enter the marks of 10 students: \n");
    for(int i=0; i<length; i++){
        scanf("%d", &marks[i]);
        if(marks[i]>=20 && marks[i]<=25){
            count++;
        }
    }
    printf("Number of students with marks between 20 and 25: %d\n", count);
    return 0;
}