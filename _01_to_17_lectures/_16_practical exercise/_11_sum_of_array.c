/*Objective
1) create a sep function
2) func will ask for size and then for the elements
3) func will return the sum of all the element

4) in array -> *int pointer_array = array automatically become *int pointer_array = &array
5) for array we create like this int array[3] = {1, 2, 3}
6) pointer -> (int *pointer_array = array) not need to use (&array) as 
in c for (array pointer array points to its first element automatically 
so passing &array would be wrong 
7) same for accessing the value (pointer_array[i] is correct and *pointer_array is wrong))*/

#include <stdio.h>
#define SIZE 5
int sum(int *p_array, int size); // just a defination func is below the main

int main()
{

    int array[SIZE] = {1, 2, 3, 4, 5};

    int result = sum(array, 5);
    printf("\nSum : %d\n\n\n", result);

    // exit code
    return 0; // if execute successfully
}

int sum(int *p_array, int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += p_array[i];
    }

    return sum;
}