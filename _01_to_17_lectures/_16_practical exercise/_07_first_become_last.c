/*Objective
1) make the element of index (0) -> last index element 
2) shift the array accordingly*/

#include <stdio.h>
#define size 8

int main()
{
    int array[size] = {1, 2, 3, 4, 5, 6, 7, 8};
    int first_value = array[0];

    // using loop
    for (int i = 0; i < size-1; i++)
    {
        array[i] = array[i+1];
    }
    array[size-1] = first_value;

    // print the array
    printf("\n[");
    for (int i = 0; i < size; i++)
    {
        if (i == size-1)
        {
            printf("%d",array[i]);
        }
        else
            printf("%d, ",array[i]);
    }
    printf("]");
    
    


    // exit code
    return 0; // if execute successfully
}
