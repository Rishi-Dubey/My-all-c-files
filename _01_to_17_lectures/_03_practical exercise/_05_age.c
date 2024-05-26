#include "stdio.h"

int main()
{
    printf("My Birth years is %d and I am %d old\n", 2024 - 18, 2024 - 2005);

    char x[] = "Raju";   // creating a variable to store a string
    printf("\n%s\n", x); // Here variable will print the value
    int y;               // initilization a variable y which only accept int data type
    printf("Enter the value of y to print it : ");
    scanf("%d", &y); // like a input statement
    printf("\nValue you enter : %d", y);

    return 0;
}
