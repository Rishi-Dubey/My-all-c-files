/*Objective
1) A fx() -> return pell value at given index
2) Another simple fx() -> do same
3) index -> get from user
4) pell series = (p(0) = 0), p(1) = 1, p(n) = [2 x p(n-1) + p(n-2)] )
5) pell series = 0,1,2,5,12,29...*/

#include <stdio.h>

int pell_series(int index)
{
    // creating base case
    if (index == 0)
        return 0;

    else if (index == 1)
        return 1;

    else if (index > 1)
        return (pell_series(index - 1) * 2) + pell_series(index - 2);
}

int simple_pell_series(int index)
{
    int current_value = 1, previous_value = 0;
    int value;

    // creating base case
    if (index == 0)
        return 0;

    else if (index == 1)
        return 1;

    else if (index > 1)
    {
        for (int i = 2; i <= index; i++)
        {
            // Appling formula
            value = previous_value + 2 * current_value;

            // swipe after the formula
            previous_value = current_value;
            current_value = value;
        }
        return value;
    }
}

int main()
{
    int index;
    printf("Enter index : ");
    scanf("%d", &index);

    int result = pell_series(index);
    printf("\nLucus value = %d", result);

    result = simple_pell_series(index);
    printf("\nLucus value = %d", result);

    // if successfull
    return 0;
}