/*
    description: This program demonstrates the structure of a C program.
    name: StructureOfC
    programmer: Bishal Rijal
    date: 2023-10-01
    time: 07:44 PM
*/

#include <stdio.h> // Preprocessor directive to include standard input-output library
#define PI 3.14159 // Macro definition for constant value of PI
// Global variable declaration
int globalVar; // Example of a global variable

// Function prototype declaration
int main(){
    globalVar = 10; // Assigning value to global variable
    printf("Hello, World! This is a structure of a C program.\n");
    return 0; // Return statement indicating successful execution
}

// User-defined function (if needed, can be added here)
void exampleFunction() {
    // Function body
}

// Another example of a structure of a C program with documentation and comments:

// Documentation
/**                     
 * file: sum.c
 * author: you
 * description: program to find sum.
 */

// Link
#include <stdio.h>      

// Definition
#define X 20 

// Global Declaration
int sum(int y);   

// Main() Function
int main(void)       
{
  int y = 55;
  printf("Sum: %d", sum(y));
  return 0;
}

// Subprogram
int sum(int y) 
{
  return y + X;
}