/*Finds how many digit number it is*/

#include <stdio.h>

int x_digit(int num)
{
    if (num < 10)
    {
        return 1;
    }
    return 1 + x_digit(num / 10);
}

int main()
{
    printf("\nNumber 1001 : %d digit\n", x_digit(1001110));

    // if successful
    return 0;
}