

#include <stdio.h>
#define SIZE 5

void array_to_zero(int *p_array, int size)
{
    for (int i = 0; i < size; i++)
    {
        p_array[i] = 0;
    }
    
}


int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5};

    printf("\nArray before func\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ,",array[i]);
    }

    array_to_zero(array, SIZE);

    printf("\nArray After func\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ,",array[i]);
    }
    


    
    // exit code
    return 0; // if execute successfully
}
