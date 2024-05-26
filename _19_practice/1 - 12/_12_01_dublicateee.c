/*Objective
1) A fx() -> 1 or 0
2) Get a num(n) check if it has even value and even positon and odd at odd position
3) Ex = 1234-> 1(0) , 2(1), 3(2), 4(3) - Here return will be 0 .
4) Ex = 2345-> 2(0), 3(1), 4(2), 5(3) -  Here return will be 1 . */

#include <stdio.h>

int correct_place(int num)
{
    int total_index = 0;
    int count = num;
    while (count > 9) // to get the index
    {
        total_index++;
        count = count / 10; // -> remove the last value;
    }

    int last_digit = num % 10;

    // base case
    if (total_index == 0)
    {
        if (num % 2 == 0)
            return 1; // for right place

        return 0; // for wrong place
    }

    // Correct place case
    if ((last_digit % 2 == 0 & total_index % 2 == 0) || (last_digit % 2 != 0 & total_index % 2 != 0))
    {
        return correct_place(num / 10); // removes the last digit;
    }

    // Incorrect place case
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