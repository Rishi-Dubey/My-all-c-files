#include <stdio.h>

// fibonacci series
// 0, 1, 1, 2

int fibonacci_series(int num)
{
    if (num == 0)
    {
        return 0;
    }

    else if (num == 1)
    {
        return 1;
    }

    return fibonacci_series(num - 1) + fibonacci_series(num - 2);
}

int main()
{
    printf("\nFactorial num : %d\n", fibonacci_series(10));
}