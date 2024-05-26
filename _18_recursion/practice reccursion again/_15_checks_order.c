#include <stdio.h>

/*Objective
1) A fx() -> Receives num
return ->
        1234  ->  1 (strictly ascending)[left -> right]
        4321  -> -1 (strictly descending)
        12340 ->  0 (neither dec nor ascending)
        */

int check_order(int num)
{
    int ones = num % 10;
    int tens = (num / 10) % 10;

    // Base case;
    if (num < 100) // Need atleast two values to compare
    {
        if (ones > tens)
        {
            return 1;
        }
        return -1;
    }
    // now running recursion here continuously
    int flag = check_order(num / 10);

    // now we get the results from the base case either (0 or 1);
    if (flag == 1 & ones > tens)
    {
        return 1;
    }
    else if (flag == -1 & tens > ones)
    {
        return -1;
    }
    // when nothing matches
    return 0;
}

int main()
{
    int order = check_order(3241);
    printf("Order : %d", order);
    // if successful exit
    return 0;
}