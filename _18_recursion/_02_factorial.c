/*Objective
1) A fx() uses recursion return the factorial of the number*/

#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0) // base case
        return 1;

    return num * factorial(num - 1);
}

int main()
{
    int num;
    printf("Enter factorial num : ");
    scanf("%d",&num);

    int result = factorial(num);

    printf("\nFactorial : %d",result);
    // if successfull
    return 0;
}