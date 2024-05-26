/*Objective
1) A fx() of recursion that rec -> int num
2) main receives sequence of num until encounter (-1)
3) fx() return how many value are smaller than num
4) ex -> num = 5, seq = 1,4,2,6 so return -> (3) as only 1,2,3 is smaller than 5*/

#include <stdio.h>
#include <stdlib.h>

int less_than(int num)
{
    int item;
    printf("Enter num : ");
    scanf("%d", item);
    printf("\n");

    if (item == -1)
    {
        return 0;
    }

    else if (item > num)
    {
        return 1 + less_than(num);
    }
    return less_than(num);
}

int main()
{
   int result = less_than(5);
   printf("\nValues Less than 5 : %d\n",less_than(5));
}