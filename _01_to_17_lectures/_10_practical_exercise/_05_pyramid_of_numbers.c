// Program will receive a num(n) which will be the number of rows then will print the
// pyramid shape with the number number will increase as the number of rows.

#include <stdio.h>

int main()
{
    int number;
    printf("\nEnter the number of rows : ");
    scanf("%d", &number);
    printf("\n");

    int count_whitespace = number - 1;
    int num_count = 1; // increase all rows increases

    // pattern numbers change
    for (int i = 1; i <= number; i++) // will print number(n) rows or run (n) times
    {
        int temp_count = count_whitespace; // hold temp value for count_whitespace
        while (temp_count != 0)
        {
            printf(" ");
            temp_count -= 1;
        }
        // print the number in rows number increase constantly
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", num_count);
            num_count += 1;
        }
        printf("\n");
        count_whitespace -= 1;
    }
}