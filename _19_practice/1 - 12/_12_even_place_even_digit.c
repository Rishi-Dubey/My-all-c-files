/*Objective
1) A fx() -> 1 or 0
2) Get a num(n) check if it has even value and even position and odd at odd position
3) Ex = 1234-> 1(0) , 2(1), 3(2), 4(3) - Here return will be 0 .
4) Ex = 2345-> 2(0), 3(1), 4(2), 5(3) -  Here return will be 1 . */

#include <stdio.h>

/*How fx() will work
1) n = 2346

so we do num // 100 -> we get two pair(two digits number) in last if its have even digits
else for odd we get (1 digits) no.

2346 -> 4, 6 -> right*/
int correct_place(int num)
{
    // Base case
    // This will happen I case of odd number of digits in num
    // like 123 -> (23) will be used at ones then only (1) will remain
    if (num < 10) // we left with first postion(0) -> even postion
    {
        // if num % 2 == 1(means odd) then return 0 else 1;
        return num % 2 ? 0 : 1;
    }

    // base case
    else if (num < 100)
    {
        // Here we get two value 
        // ex = 1234 -> 12 we know that right most is odd place(1)[2] and left is even(0)[1]->no.
        // num % 10 -> given last digit % 2 == 1 tell it odd
        // num / 10 -> all value except last % 10 -> last second value in num % 2 == 0 -> checks even

        if ((num %10 % 2 == 1) & (num/10 % 10 % 2 == 0))
        {
            // after remove the last two values of the num(1234) -> num(12) only
            return 1;
        }
        
        return 0;
    }

    else if ((num %10 % 2 == 1) & (num/10 % 10 % 2 == 0))
    {
        return correct_place(num / 100);
    }
    
    return 0;
    
    
}

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int result = correct_place(num);
    if (result == 1)
    {
        printf("\nDigts of %d : Correct place", num);
    }
    else
        printf("\nDigits of %d : Not Correct place", num);

    // if successfull
    return 0;
}