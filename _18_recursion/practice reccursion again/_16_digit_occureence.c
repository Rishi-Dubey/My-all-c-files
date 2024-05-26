#include <stdio.h>

/*Objective
1) A fx() -> receive (num) and (single digit (0<= digit >= 9))
2) ex -> num = 123422 , digit = 2 so (2) occurs 3times in num -> odd times return (0)
3) ex -> num = 1123, digit = 1, so 1 occur 2 times in num so return (1)*/

int is_even_occurrence(int num, int single_digit)
{
    // Base Case
    if (num < 10)
    {
        if (num == single_digit)
        {
            return 1; 
        }
        return 0;
    }
    int ones = num % 10;

    if (ones == single_digit)
    {
        return 1 + is_even_occurrence(num / 10, single_digit);
    }

    return is_even_occurrence(num / 10, single_digit);
}

int main()
{
    int result = is_even_occurrence(21431112, 1);
    printf("Result : %d",result);
    // if successful exit
    return 0;
}