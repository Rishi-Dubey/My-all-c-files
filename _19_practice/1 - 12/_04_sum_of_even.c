/*Objective
1) A fx() -> get the sequence from user
2) check even and have return their sum*/

#include <stdio.h>

int sum_even()
{
    int sequence;
    printf("Enter num or -1 to quit : ");
    scanf("%d", &sequence);

    if (sequence == -1)
    {
        return 0;
    }

    else if (sequence % 2 == 0)
    {
        return sequence + sum_even(); // count increase by one and call again
    }

    else
        return sum_even(); // when num is odd
}

int main()
{
    int result = sum_even();

    printf("\nSum Even : %d", result);

    // if successfull
    return 0;
}