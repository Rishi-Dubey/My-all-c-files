// going to print the value of numbers with power
// user will input the power value and numbers 

#include <stdio.h>

int main()
{
    int number, power;
    char rerun = 'y';

    while (rerun != 'q')
    {
        printf("\nEnter number : ");
        scanf("%d",&number);

        printf("Enter power : ");
        scanf("%d",&power);
        printf("\n");
        
        int value = number;
        int original_power = power;

        while (power > 1)
        {
            value = value * number;
            power -= 1;
        }

        printf("Number %d^%d : %d\n\n",number,original_power,value);
        printf("Enter (q) to quit else (any key) : ");
        scanf(" %c",&rerun); // adding space to consume the /n from previous in buffer
        if (rerun == 'q')
        {
            printf("Thanks for using the power Calucator (:\n\n");
            rerun = 'q';
        }
    }
    
    // exit
    return 0;
}