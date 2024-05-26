// program will calculate the value of a number with power

#include <stdio.h>

int main()
{
    int number, power, result = 1;
    // int temp_power = power; // to hold the value of power
    printf("Enter base : ");
    scanf("%d", &number);

    printf("Enter power : ");
    scanf("%d", &power);


    if (power >= 0)
    {
        for (int i = 1; i <= power; i++)
        {
            result *= number;
        }
        printf("%d^%d : %d \n\n", number, power, result);
    }

    else {
        printf("Invalid power ): \n\n");
    }

    
}