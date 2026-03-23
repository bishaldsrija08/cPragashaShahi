// WAP to implement a basic calculator using switch case. The calculator should be able to perform addition, subtraction, multiplication, and division operations on two numbers entered by the user.
#include<stdio.h>
int main(){
    float num1, num2;
    char operator;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch(operator){
        case '+':
            printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0){
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.");
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.");
    }
    return 0;
}