// WAP to enter student name, roll number of 5 students and display the same using structure.

#include <stdio.h>
struct student{
    char name[50];
    int roll;
};
int main(){
    struct student s[5];
    // taking input from user
    for(int i=0;i<5;i++){
        printf("Enter name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter roll number of student %d: ",i+1);
        scanf("%d",&s[i].roll);
    }

    // displaying the details of students
    printf("\nDetails of students:\n");
    for(int i=0;i<5;i++){
        printf("Name: %s, Roll Number: %d\n",s[i].name,s[i].roll);
    }
    return 0;
}