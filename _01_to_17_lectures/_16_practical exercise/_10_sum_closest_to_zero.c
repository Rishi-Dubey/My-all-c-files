/*Objective
1) Program will print the sum of two value who sum is closest to zero
2) like in array = [1,-1,2,3] -> -1+1 = 0 so zero is closest to zero*/

#include <stdio.h>
#define SIZE 5

int main()
{
    // -> result we want closed to zero (-1+1)-> 0
    int array[SIZE] = {1, 3, -2, 0, -1};
    // size of sum_array = size(size-1) because we are not adding the sum of element to itself
    int sum_array[SIZE * (SIZE - 1)] = {0};

    // storing all the sum in sum_array[list]
    int index_of_sum_array = -1;
    for (int i = 0; i < SIZE; i++) // accessing all the elements one after a whole loop
    {
        for (int j = 0; j < SIZE; j++) // accessing all the element to add in index (i)
        {

            if (i == j) // not add element of same index(means add to itself)
                continue;

            index_of_sum_array += 1; // increasing the index by one
            // A single element of index(i) + all index(j) add to the sum_array
            sum_array[index_of_sum_array] = array[i] + array[j];
        }
    }

    printf("\nElement in sum_array_list\n");
    for (int i = 0; i < (SIZE * (SIZE - 1)); i++)
    {
        printf("%d, ", sum_array[i]);
    }
    printf("\n\n");

    // getting the minimum value stored in sum_array
    int sum_close_to_zero = sum_array[0]; // assume

    for (int i = 0; i < (SIZE * (SIZE - 1)); i++)
    {
        if (sum_array[i] < 0)
        {
            sum_array[i] = -sum_array[i]; // (-) -> (+)
        }

        for (int j = 0; j < (SIZE * (SIZE - 1)); j++)
        {
            if (sum_array[i] > sum_array[j])
            {
                sum_close_to_zero = sum_array[j];
                break;
            }
        }
    }

    printf("\nElement in sum_array_list\n");
    for (int i = 0; i < (SIZE * (SIZE - 1)); i++)
    {
        printf("%d, ", sum_array[i]);
    }
    printf("\n\n");
    printf("\nSum of two values in array closed to zero  : %d", sum_close_to_zero);

    // exit code
    return 0; // if execute successfully
}
