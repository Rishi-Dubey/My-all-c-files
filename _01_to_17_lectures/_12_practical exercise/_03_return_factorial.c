/*Program objective
1)A function which receive a num
2) return its factorial
3) else print the error msg*/

#include <stdio.h>

int factorial(int num)
{
    int factorial = 1;

    if (num < 0)
    {
        return -1; // means error
    }

    else if (num == 0 || num == 1)
    {
        return 1;
    }
    
    while (num > 1)
        {
            factorial *= num;
            num -= 1;
        }

        return factorial;
}

int main()
{
    int num;
    printf("\nEnter num for factorial : ");
    scanf("%d", &num);

    int fac = factorial(num);
    if (fac == -1)
    {
        printf("!!! factorial only exits for 0 and higher int value\n");
    }

    else
        printf("Factorial(%d!) : %d \n\n", num, fac);
}