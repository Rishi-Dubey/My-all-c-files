// Print (*) as many times as user want

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char orient;
    int times;
    printf("Enter the orient(h,v) order : ");
    scanf("%c", &orient);

    printf("Enter the numbers of (*) : ");
    scanf("%d", &times);

    int count = 0;

    // print according to orient
    if (orient == 'h')
    {
        while (count < times)
        {
            printf("*");
            count += 1;
        }
    }

    else if (orient == 'v')
    {
        while (count < times)
        {
            printf("*\n");
            count += 1;
        }
    }

    else
        printf("Invalid option ): \n\n");

    // exit
    return 0;
}