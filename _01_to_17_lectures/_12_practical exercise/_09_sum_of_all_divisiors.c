/*Objective
1) A function which will take a number
2) find its all possible divisior and give their sum
3) ex - 12 -> 1,2,3,4,6,12 : sum -> 28 *
4) An Optimized solution.*/

#include <stdio.h>

int sum_of_divisiors(int num)
{
    int sum = 0; // no divisiors yet
    int i;

    if (num == 1)
        return num;

    for (i = 2; i * i < num; i++)
    {

        if (num % i == 0)
            sum += i + (num / i); // like 8 -> 2 + (8/2) = 2+4 -> 6
    }

    if (i * i == num) // here so we don't add twice like 16 / 4 = 4 so don't add 4+4 in sum twice
        sum += i;

    return sum + 1 + num; // as 1 and num both are divisor of all numbers
}

int main()
{
    int num ;
    printf("\nEnter a number : ");
    scanf("%d", &num);

    printf("Calling the function to get the sum of all the divisiors \n\n");

    printf("Sum : %d \n\n",sum_of_divisiors(num));
    return 0;
}

