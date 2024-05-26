// Here I will create a function will not receive anything - no parameters
// will return something

#include <stdio.h>

int max_of_3_numbers()
{
    int num1, num2, num3;

    printf("Enter num 1 : ");
    scanf("%d",&num1);

    printf("Enter num 2 : ");
    scanf("%d",&num2);

    printf("Enter num 3 : ");
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }

    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }

    else if (num3 > num1 && num3 > num2)
    {
        return num3;
    }

    else
    {   
        printf("!!! Invalid Input ):");
        return -1;
    }
}


int main()
{
    printf("\nCalling the max_of_3_numbers function\n");

    int max = max_of_3_numbers();

    if (max != -1)
        printf("\nMax value : %d \n\n", max);

    // exit
    return 0;
}