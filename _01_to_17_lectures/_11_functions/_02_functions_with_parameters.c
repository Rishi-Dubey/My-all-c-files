// Here I will create a function which will receive two numbers and will print the max and mix
// function will not return any thing but print

#include <stdio.h>

void max_min(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("Max : %d \nMin : %d\n", num1, num2);
    }

    else
    {
        printf("Max : %d \nMin : %d\n", num2, num1);
    }
}

int main()
{
    int num1, num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    printf("\n....Calling the min max function\n");

    max_min(num1, num2);
}