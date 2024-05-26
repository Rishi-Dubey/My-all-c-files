/*Objective
print unique value in the given array
also count how many unique value are their in array*/

#include <stdio.h>
#define size 13

int main()
{
    int array[size] = {1, 2, 3, 4, 1, 2, 3, 5, 6, 7, 7, 8, 9};
    int unique_count = 0; // count the total uniques values
    int flag = 1;         // means unique value
    int dublicate_array_values[size]; // stores the dublicate value which are in array


    for (int i = 0; i < size; i++) // get every value for compare in the array
    {
        flag = 1; // reset every time we stuck to 0;
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                dublicate_array_values[i] = array[i]; // storing if dublicate found
                flag = 0;
                break; // we know array[i] is element is not unique 
            }
        }

        // check if it not present in dublicate list
        for (int k = 0; k < size; k++)
        {
            if (array[i] == dublicate_array_values[k])
            {
                flag = 0;
            }
            
        }
        
        // print if the value is unique
        if (flag == 1)
        {
            printf("\nUnique value in array[%d] : %d\n", i, array[i]);
            unique_count += 1;
        }
    }
    printf("\nTotal Unique value in array : %d \n\n", unique_count);

    // exit code
    return 0; // if execute successfully
}
