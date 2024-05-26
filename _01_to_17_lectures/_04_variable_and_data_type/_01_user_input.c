// Here I will create a program which which will print the average of 3 numbers

#include <stdio.h>

int main()
{
    printf("\nProgram will takes two numbers and give their avg\n");
    float num1; // decleration
    float num2;

    // for num 1
    printf("\nEnter the value of num1 : ");
    scanf("%f", &num1); // scanf automatically add \n after we press enter

    // for num 2
    printf("Enter the value of num2 : ");
    scanf("%f", &num2); // here & specify the address of the variable

    printf("\nThe avg of both num : %.2f",(num1+num2)/2);

    // exit
    return 0;
}