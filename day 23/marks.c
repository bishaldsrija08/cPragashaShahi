// WAP to accept the marks of 5 subjects and display them.
#include<stdio.h>
int main(){
    float marks[5];
    printf("Enter the marks of 5 subjects: ");
    // marks[0], marks[1], marks[2], marks[3], marks[4]
    int length = sizeof(marks)/sizeof(marks[0]);
    for(int i=0; i<length; i++){
        scanf("%f", &marks[i]);
    }
        for(int i=0; i<length; i++){
        printf("Marks of subject %d: %.2f\n", i+1, marks[i]);
    }
    // marks[5]= {56,78, 89, 12, 34}
    return 0;
}