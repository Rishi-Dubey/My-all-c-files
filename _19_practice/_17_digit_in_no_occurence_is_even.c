/*Objective
1) A fx() -> receive (num) and (single digit (0<= digit >= 9))
2) ex -> num = 123422 , digit = 2 so (2) occures 3times in num -> odd times return (0)
3) ex -> num = 1123, digit = 1, so 1 occur 2 times in num so return (1)*/

#include <stdio.h>

int even_odd_occurence(int num, int digit)
{
    int match_so_far; // 0 for odd , 1 for even match
    if (num < 10)
    {
        if (num == digit) // if match(means 1 match found) means odd(occurence) so 0;
        {
            return 0;
        }
        return 1;
    }

    match_so_far = even_odd_occurence(num / 10, digit);
    // from here on out num will increase from one digit -> go to original num
    // After one phase of reccursion end from num(1123) -> num(1)[return either (0 or 1)] base case
    // Now we have base case value(1 or 0) and originall(num = 1123) so now num = (11) only)[last second]

    // when we have base case (odd times match) means last value matches with digits(so 1 match found)
    if (match_so_far == 0)
    {
        if (num % 10 == digit) // another match found so (odd + odd) == even(1)
        {
            return 1; // 2n(matches even)
        }
        else // still only odd matches(1 , 3 etc)
            return 0;
    }

    // in base case no match were found (means we have 1)[0 match found][even time occurence]
    else if (match_so_far == 1)
    {
        // still no match found
        if (num % 10 != digit)
        {
            return 1;
        }
        // found match (even + odd) -> odd
        else
            return 0;
    }
}

int main()
{
    int result = even_odd_occurence(11123, 1);
    printf("result : %d", result);

    // if successfull
    return 0;
}