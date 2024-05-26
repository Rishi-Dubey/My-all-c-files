// Program will receive a number whose table is to be printed and an another num
// which would be the upper limit to which the table would be printed.

#include <stdio.h>

int main()
{
    int num_table, upper_limit;

    printf("\nEnter whose multiplication table you want : ");
    scanf("%d", &num_table);

    printf("Enter the upper limit : ");
    scanf("%d", &upper_limit);

    int i = 1;

    printf("Multiplication table of %d\n", num_table);

    while (i <= upper_limit)
    {
        printf("%d x  %d = %d\n", num_table, i, num_table * i);
        i += 1;
    }
    printf("\n\n");
    // exit
    return 0;
}