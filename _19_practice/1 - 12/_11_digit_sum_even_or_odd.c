/*Objective
1) A fx() -> (1) sum of digit is even else (0)
2) takes a num -> 123 -> 1 + 2 + 3 = 6(even) -> so return 1*/

#include <stdio.h>

// wrong fx() -> needed to be correct
int odd_or_even(int num)
{
    if (num >= 10)
    {
        // will get the total sum of the digit this way
        int sum = num % 10 + odd_or_even(num / 10);
        if (sum % 2 == 0) // for even
            return 1;

        return 0; // for odd
    }
    return num; // base case when num < 10; for sum
}

int is_odd_or_even(int num)
{
    if (num < 10)
        return num % 2 ? 0 : 1; // if n%2 == 1(True means odd(0)) else even(1)

    // return not fx() for odd(num % 10 = last value) % 2 = 1(True) means odd
    return (num % 10) % 2 ? !is_odd_or_even(num / 10) : is_odd_or_even(num / 10);
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int result = odd_or_even(num);
    if (result == 1)
    {
        printf("\nDigit sum of %d : even", num);
    }
    else
        printf("\nDigit sum of %d : odd", num);

    

    // if successfull
    return 0;
}