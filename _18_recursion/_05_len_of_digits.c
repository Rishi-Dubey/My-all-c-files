/*Objective
return len of digits
ex -> 123 -> len is 3*/

#include <stdio.h>

int len(int num)
{
    if (num == 0)
    {
        return 0; // base case
    }
    
    return 1 + len(num / 10);
    
}

int main()
{
    int num;
    printf("Enter num : ");
    scanf("%d",&num);

    int result = len(num);
    printf("\nLen of num(%d) : %d",num, result);

    // if successfull
    return 0;
}