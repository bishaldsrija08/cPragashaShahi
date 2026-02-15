// Input two numbers and an operator (+, −, *, /) and perform the calculation using conditional statements
#include <stdio.h>
int main()
{
    char op = '%';
    float num1 = 10.0, num2 = 5.0, result;

    if (op == '+')
    {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    }
    else if (op == '-')
    {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    }
    else if (op == '*')
    {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else if (op == '%')
    {
        if ((int)num2 != 0)
        {
            result = (int)num1 % (int)num2;
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Error: Invalid operator.\n");
    }
    return 0;
}