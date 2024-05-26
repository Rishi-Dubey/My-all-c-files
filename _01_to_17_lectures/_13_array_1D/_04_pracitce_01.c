#include <stdio.h>
#define size 8

void main()
{
    int array[size] = {1, 2, 3, 4, 5, 35, 7, 8};
    int good_neighbour = 0; // Assumes false
    int no_of_good_neighbours = 0;

    for (int i = 1; i < size - 1; i++)
    {
        if ((array[i - 1] * array[i + 1]) == array[i])
        {printf("Array[%d]*Array[%d] = Array[%d]\n", i-1,i+1,i);
            good_neighbour = 1;
            // printf("hello");
            no_of_good_neighbours += 1;
        }
            
    }

    if (good_neighbour == 1)
    {
        printf("\nGiven array has good neighours : %d\n",no_of_good_neighbours);
    }

    else
        printf("Not good neighbours\n");
}
