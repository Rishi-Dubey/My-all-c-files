/*Program will take an number from user and will print the sum upto the number
from 1 to that number only when that number is divisible is 3 and 5 both.
a unoptimized and optimized program I will create both*/

#include <stdio.h>

int main()
{   

    
    int num, sum = 0;
    printf("\nEnter number : ");
    scanf("%d", &num);

    // // using loops - UnOptimized solution
    // for (int i = 1; i <= num; i++)
    // {
    //     if (i % 15 == 0)
    //         sum += i;
    // }

    for (int i = 15; i<= num; i += 15)
    {
        sum += i;
    }
    printf("Sum upto %d when num is divisible by both 3 and 5 : %d \n\n", num, sum);

    // exit
    return 0;
}