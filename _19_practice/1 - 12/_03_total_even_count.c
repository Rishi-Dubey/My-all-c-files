/*Objective
1) fx() -> return the count of even sum in sequence
2) user_input sequence until user hit -1*/

#include <stdio.h>

int count_even()
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
        return 1 + count_even(); // count increase by one and call again
    }

    else
        return count_even(); // when num is odd
}

int main()
{
    int result = count_even();

    printf("\nEven Count : %d", result);

    // if successful
    return 0;
}