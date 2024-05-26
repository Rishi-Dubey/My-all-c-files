/*Objective
1) program to calucate the sum of digit
2) 12345 -> 1+2+3+4+5 = 15*/

#include <stdio.h>
#include <stdlib.h>

int digit_sum(int num)
{
    
    if (num < 10) // base case when num become less than 10;
        return num;
    
    // 953 -> 3 + digit_sum(95) -> 3 + 5 + digit_sum(9) -> 8 + 9 -> 17 ans
    return (num % 10) + digit_sum(num / 10);
}

int main()
{
    int num;
    printf("Enter num : ");
    scanf("%d",&num);

    num = abs(num); // getting the absolute value
    int result = digit_sum(num);

    printf("\nSum : %d",result);

    // if successfull
    return 0;
}