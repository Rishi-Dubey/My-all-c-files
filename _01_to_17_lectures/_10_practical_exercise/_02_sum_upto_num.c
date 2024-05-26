// Program will calculate the sum upto the given num starting from 1 to num

#include <stdio.h>

int main()
{
    int num, sum=0;
    printf("\nEnter number : ");
    scanf("%d",&num);

    // using loop to get the sum
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }

    printf("Sum of each number upto %d : %d \n\n",num, sum);
}