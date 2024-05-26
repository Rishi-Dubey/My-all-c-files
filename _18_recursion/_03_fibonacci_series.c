/*Objective
1) a fx() which print the fibonacci series
2) fx() receive the n as index
3) fib series -> 0,1,1,2,3,5,8....
4) fib(n) = fib(n-1) + fib(n-2)*/

#include <stdio.h>
#include <string.h> // Include for string manipulation functions

int fibonacci_series(int num)
{
    if (num == 2 || num == 1) // base case
    {
        return 1;
    }

    else if (num == 0)
    {
        return 0;
    }
    
    return fibonacci_series(num - 1) + fibonacci_series(num - 2);
}

int main()
{
    int num;
    printf("Enter index to find fiboncacci value : ");
    scanf("%d", &num);

    int result = fibonacci_series(num);
    printf("\nValue at index(%d) : %d", num, result);
    // if successfull
    return 0;
}