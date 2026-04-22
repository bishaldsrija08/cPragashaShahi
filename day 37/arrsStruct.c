/*
Array of structures: It is possible to create an array of structures.




*/

#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float gpa;
    char name[100];
};
int main(){
    struct student s[3];
    s[0].roll = 101;
    s[0].gpa = 3.5;
    strcpy(s[0].name, "Bishal Rijal");

    printf("Your roll no is %d\n", s[0].roll);
    printf("Your gpa is %.2f\n", s[0].gpa);
    printf("Your name is %s\n", s[0].name);


    s[1].roll = 102;
    s[1].gpa = 3.8;
    strcpy(s[1].name, "Sita Rijal");
    printf("Your roll no is %d\n", s[1].roll);
    printf("Your gpa is %.2f\n", s[1].gpa);
    printf("Your name is %s\n", s[1].name);

    s[2].roll = 103;
    s[2].gpa = 3.9;
    strcpy(s[2].name, "Ram Rijal");
    printf("Your roll no is %d\n", s[2].roll);
    printf("Your gpa is %.2f\n", s[2].gpa);
    printf("Your name is %s\n", s[2].name);
    return 0;
}