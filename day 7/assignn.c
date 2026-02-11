#include <stdio.h>
int main()
{
    int a = 5;
    int b = 11;
    int c = 3;
    // a = a + 3;
    a += 3; // This is the compound assignment operator for addition
    // b = b-2;
    b -= 2; // This is the compound assignment operator for subtraction
    c *= 4; // This is the compound assignment operator for multiplication
    printf("Value of c after multiplication: %d\n", c);
    printf("Value of b after subtraction: %d\n", b);
    printf("Value of a after addition: %d\n", a);
    return 0;
}