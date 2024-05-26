/*Objective
1) Array - [1, 2, 3, 4, 5]
2) rotate by 2 so
3) result -> [3, 4, 5, 1, 2]*/

#include <stdio.h>
#define SIZE 5
#define N 2

int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5};
    int temp_array[N]; // hold the value whose postion be taken first

    // storing the values whose postion will be taken first
    for (int i = 0; i < N; i++)
    {
        temp_array[i] = array[i];
    }

    // moving the value starts at index N to left side
    for (int i = N; i < SIZE; i++)
    {
        array[i - N] = array[i]; // assign postion from 0 to last
    }

    // placing the value whose index < N in last
    int counter = SIZE - N; // get the index where we need to place
    for (int i = 0; i < N; i++)
    {
        array[counter] = temp_array[i];
        counter++;
    }

    // print the values
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    // exit code
    return 0; // if execute successfully
}
