#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculator for operations : (+), (-), (*), (/), (%%)\n\n");
    double num1, num2;
    char operation;
    // user input
    printf("Enter num1 : ");
    scanf("%lf", &num1);

    printf("Enter num2 : ");
    scanf("%lf", &num2);

    while (getchar() != '\n')
        ; // Read characters until encountering a newline

    printf("Enter Operation : ");
    scanf("%c", &operation);

    switch (operation)
    {
    case '+':
        printf("Sum : %.1lf\n", num1 + num2);
        break;
    case '-':
        printf("Subtraction : %.1lf\n", num1 - num2);
        break;
    case '*':
        printf("Product : %.1lf\n", num1 * num2);
        break;

    case '/':
        if (num2 != 0)
            printf("Division : %.1lf\n", num1 / num2);

        else
            printf("Can't divided by 0");
        break;

    case '%':
        if (num2 != 0)
            printf("Modulas : %.1lf\n", num1 + num2);
        else
            printf("Can't divided by 0");
        break;

    default:
        printf("Invalid Mathmatical Operation\n\n");
        break;
    }
}