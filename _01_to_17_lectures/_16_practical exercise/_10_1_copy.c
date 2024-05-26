/*Objective
1) Program will print the sum of two value who sum is closest to zero
2) like in array = [1,-1,2,3] -> -1+1 = 0 so zero is closest to zero*/

#include <stdio.h>
#include <math.h>
#define SIZE 3

int main()
{   

    int array[SIZE] = {1, 0, 2};
    int lowest_sum = array[0] + array[1]; // assume

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            int sum = array[i] + array[j];
            if (abs(lowest_sum) > abs(sum))
            {
                lowest_sum = sum;
            }
        }
    }

    printf("\nLowest sum : %d",lowest_sum);
    // exit code
    return 0; // if execute successfully
}
