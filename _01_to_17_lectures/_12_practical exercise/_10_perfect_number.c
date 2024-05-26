/*Objective
1) A function which receives a number
2) get sum of all its divisors excluding itself
3) if num and sum is equal then its perfect number return 1
4) else not a perfect number return 0.*/

#include <stdio.h>

int is_perfect_number(int num)
{
    if (num == 1)
        return 0;

    int sum = 1, i; // sum = 1 default as 1 is divisor of all numbers

    for (i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i + num / i;
        }
    }

    if (i * i ==  num) // for value like 25 = 5 x 5 so add only 5
                       // false for like 12 root (3.45) but no i is here 4 
    {
        sum += i;
    }
    

    if (sum == num)
    {
        return 1;
    }

    else
        return 0;
}

int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);

    printf("Calling the function to know if number is perfect or not\n");
    printf("Perfect no is whose divisors sum == number\n\n");

    int flag = is_perfect_number(num);

    if (flag == 1)
    {
        printf("%d : Perfect Number\n\n", num);
    }

    else
        printf("%d : Not perfect Number\n\n", num);

    return 0;
}


