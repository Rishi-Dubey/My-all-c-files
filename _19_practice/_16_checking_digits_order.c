/*Objective
1) A fx() -> Receives num
return ->
        1234  ->  1 (strictly ascending)[left -> right]
        4321  -> -1 (strictly decending)
        12340 ->  0 (neither dec nor ascending)
        */

#include <stdio.h>

int order_check(int num)
{
    int unit_place = num % 10;
    int tens_place = (num / 10) % 10;
    int result_so_far; // store -1(decending) , 1(ascending) or (0) otherwise

    // Base case
    if (num < 100)
    {
        if (tens_place > unit_place) // means 4321 -> if (4 > 3) -> decending order
        {
            return -1;
        }
        return 1; // means 1234 -> if (1 < 2) -> ascending order
    }
    // make fx() run until get to base case where it will get (1 or -1) after that
    // we will know either the number order should be ascending or decending 
    // if first two digits is ascending then whole number should follow it.
    // after getting the base case it will execute the code after it.
    result_so_far = order_check(num / 10);

    // now result_so_far have possiblity (1) for asce or (-1) for decn
    // ex -> 12345 -> we know (1 < 2) first two is following ascending order (1) from base case
    // now after that 345 should also follow this order
    // so know we will compare the tens and one place for each instance like
    // when we have 1234 after base case -> order(123) -> ones(3) and tens(2) 
    // then order(1234) -> ones(4) and tens(3)

    // 1234 -> (2 < 3) then (3 < 4) -> ascending order(-1)
    if (result_so_far == 1 && (tens_place < unit_place))
    {   
        return 1;
    }
    
    // 4321 -> (3 > 2) then (2 > 1) -> decending order(-1)
    else if (result_so_far == -1 && (tens_place > unit_place))
    {
        return -1;
    }

    else
        return 0;

}

int main()
{
    int order = order_check(3321);
    printf("Order : %d", order);
}