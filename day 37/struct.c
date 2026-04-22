/*
integer collections arrayof int
string collections array of char

integer, string, float, double, char, boolean are built in data types

person {
age: 25,
name: "Bishal Rijal",
address: "Kathmandu"
}

person.age

Structure is a user defined data type that allows us to combine data of different types together. It is a collection of variables of different types under a single name. Each variable in the structure is called a member. We can access the members of a structure using the dot operator (.) or the arrow operator (->) if we are using pointers.


It is a collection of values of different data types.

Examples: For a student store the following information:

name(string)
roll no (integer)
gpa (float)

syntax:
struct structure_name {
    data_type member1;
    data_type member2;
    ...
};

struct student{
char name[50];
int roll;
float gpa;
};

*/

#include<stdio.h>
#include<string.h>

struct student{
char name[50];
int roll;
float gpa;
};

int main(){
    struct student s1 = {"Bishal Rijal", 101, 3.5};
    // s1.roll = 101;
    // s1.gpa = 3.5;
    // strcpy(s1.name, "Bishal Rijal");

    
    printf("Your roll no is %d\n", s1.roll);
    printf("Your gpa is %.2f\n", s1.gpa);
    printf("Your name is %s\n", s1.name);


    struct student s2 = {"Sita Rijal", 102, 3.8};

    printf("Your roll no is %d\n", s2.roll);
    printf("Your gpa is %.2f\n", s2.gpa);
    printf("Your name is %s\n", s2.name);


    struct student s3 = {"Ram Rijal", 103, 3.9};
    printf("Your roll no is %d\n", s3.roll);
    printf("Your gpa is %.2f\n", s3.gpa);
    printf("Your name is %s\n", s3.name);
    

    return 0;
}