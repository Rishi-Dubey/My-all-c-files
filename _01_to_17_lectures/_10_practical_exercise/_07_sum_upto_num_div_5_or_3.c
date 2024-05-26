
#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter number : ");
    scanf("%d", &num);
    int sum = 0;

    for (int i = 3; i <= num; i+= 2)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }
    printf("Sum upto %d when num is divisible by 3 or 5 : %d \n\n", num, sum);
}