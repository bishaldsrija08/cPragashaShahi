// WAP to print interest.

#include <stdio.h>
int main(){
    float principal = 5000.0;
    float rate = 5.5;
    float time = 3.5;

    float interest = (principal * rate * time)/100;
    printf("The interest is: %.2f\n", interest);
    return 0;

}