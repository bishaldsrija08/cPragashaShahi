#include<stdio.h>
void printName(char name[], int age, char address[]){
    printf("My name is %s and I am %d years old and I live at %s\n",name, age, address);
}
int main(){
    printName("Bishal", 24, "123 Main Street");
    printName("Pragasha", 25, "456 Oak Avenue");
    printName("Charlie", 26, "789 Pine Road");
    return 0;
}