/*return 1 (for even sum) else 0*/

#include <stdio.h>

int even_odd_sum(int num)
{
    if (num > 9)
    {
        int is_even = (num % 10) % 2;      // get the 123 -> 3 % 2 -> 1(odd)
        int flag = even_odd_sum(num / 10); // put the 123 -> 12 part only

        if (flag == 1 & is_even == 0) // (even + even)
        {
            return 1;
        }
        
        else if (flag == 0 & is_even == 1) // (odd + odd) -> even
        {
            return 1;
        }

        return 0;
        
    }

    if (num < 10)   
    {
        if (num % 2 == 0)
        {
            return 1; // even
        }
        return 0; // odd
        
    }
    
}

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int result = even_odd_sum(num);
    if (result == 1)
    {
        printf("\nDigit sum of %d : even", num);
    }
    else
        printf("\nDigit sum of %d : odd", num);
    // if successful exit
    return 0;
}