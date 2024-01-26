#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1, num2, result;
    char operat;

    printf("Enter the operation you want to perform (+, -, *, /): ");
    scanf("%c", &operat);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operat)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator");
            break;
    }

    printf("Result: %f", result);

    return 0;
}

