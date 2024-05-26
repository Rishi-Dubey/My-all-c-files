#include <stdio.h>

int place_checker(int num)
{
    if (num < 10)
    {
        if (num % 2 != 0) // At place(1) -> odd
        {
            return 1;
        }
        return 0;
    }

    else if (num < 100)
    {
        int second_place = num % 10;
        int first_place = num / 10;

        if (first_place % 2 != 0 & second_place % 2 == 0)
        {
            return 1;
        }
        return 0;
    }

    int second_place = num % 10;
    int first_place =  num / 10; 

    int flag = place_checker(num / 100);

    if (flag = 1)
    {
        if (first_place % 2 != 0 & second_place % 2 == 0)
        {
            return 1;
        }
        return 0;   
    }
    return 0;
}

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int result = place_checker(num);
    if (result == 1)
    {
        printf("\nDigits of %d : Correct place", num);
    }
    else
        printf("\nDigits of %d : Not Correct place", num);
    // if successful exit
    return 0;
}