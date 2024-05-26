/*Objective
1) A fx() -> receive:
          -  Total : int
          -  Num 1 : int
          -  Num 2 : int
(total = 3, num1 = 2, num2 = 6)
so print => 222666*/

#include <stdio.h>

void special_print(int total, int num1, int num2)
{
    if (total > 0)
    {
        printf("%d", num1);
        special_print(total - 1, num1, num2);  // doing recursions (total) times
        // after recursion ends means total = 0 fx() -> start printing the num2 (total) times
        printf("%d", num2);
    }
}

int main()
{

    special_print(4, 1, 3);
    // if successful
    return 0;
}