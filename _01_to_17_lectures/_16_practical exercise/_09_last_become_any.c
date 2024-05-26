/*Objective
1) array -> [1, 2, 3, 4, 5]
2) rotate right by 2 or any N
3) after -> [4, 5, 1, 2, 3]*/

#include <stdio.h>


#define SIZE 5
#define N 2

int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5};

    // run until N 
    for (int j = 0; j < N; j++)
    {
        int temp_value = array[SIZE - 1]; // get the last value

        // loop to move all value to right by 1 index
        for (int i = SIZE - 1; i > 0; i--)
        {
            array[i] = array[i - 1];
        }
        array[0] = temp_value; // last become first
    }

    // print the values after change
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    // if successfully run
    return 0;
}