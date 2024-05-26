/*Objective
print(Accordingly)
1) [1,2,3,4,5] -> fully sorted
2) [1,2,3,3,5] -> sorted
3) [1,2,3,1,5] -> not sorted*/

#include <stdio.h>
#define size 10

int main()
{
    int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int flag = 2; // means fully sorted assume
    // checking if array is sorted or not
    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            flag = 0;
            break; // we knows its not a sorted array
        }
        else if (array[i] == array[i + 1])
        {
            flag = 1;
        }
    }

    switch (flag)
    {
    case 0:
        printf("\nNot a sorted array\n");
        break;
    
    case 1:
        printf("\nSorted array\n");
        break;
    
    default:
        printf("\nStrictly Sorted array\n");
        break;
    }
    

    // exit code
    return 0; // if execute successfully
}
