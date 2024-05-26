/*Objective
1) using recursion return the value of the sum upto n*/

#include <stdio.h>
#include <string.h> // Include for string manipulation functions

/*
n = 3
so original return -> 3 + sum(3-1)
sum(3-1) = 2 + sum(2-1)
sum(1) = 1
original return -> 3 + 2 + 1
*/

int sum_upto_n(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum_upto_n(n - 1);
}

int main()
{
    int sum = sum_upto_n(5);
    printf("\nSum : %d", sum);

    // if successfull
    return 0;
}