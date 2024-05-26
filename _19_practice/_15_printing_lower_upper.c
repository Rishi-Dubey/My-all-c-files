/*Objective
1) A fx() -> reveive:
          -  Total : int
          -  value 1 : char
(total = 3, value1 = 'a')
so print => aaaAAA*/

#include <stdio.h>

void special_print(int total, char value)
{
    if (total > 0)
    {
        printf("%c", value);
        special_print(total - 1, value);  // doing reccursion (total) times
        // after reccusion ends means total = 0 fx() -> start printing the captal a (total) times
        printf("%c",value - 32); // differene 'a' - 'A' = 32 in ASCII code
    }
}

int main()
{

    special_print(4, 'a');
    // if successfull
    return 0;
}