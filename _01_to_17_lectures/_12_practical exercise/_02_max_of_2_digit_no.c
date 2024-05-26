/*Program objective
1)A function that will receive two digit no.
2)Check if it is two digit or not
3)if yes find the max digit and print it 35 -> 5
4)else error*/

#include <stdio.h>

int max_of_2_digit(int num)
{
    if (num > 9 && num < 100)
    {
        int once_place = num % 10;
        int tens_place = num / 10;

        if (once_place > tens_place)
        {
            printf("Max value = once place -> %d\n", once_place);
        }

        else
        {
            printf("Max value = tens place -> %d\n", tens_place);

        }
    }
    
    else
    {
        printf("!!! Invalid Input %d not a 2 digit number\n", num);
    }
}

int main()
{
    int num;
    printf("\nEnter a 2 digit no. : ");
    scanf("%d", &num);

    max_of_2_digit(num);

    return 0;
}