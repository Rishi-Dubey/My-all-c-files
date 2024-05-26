#include <stdio.h>
#define size 5

int max_adjacent_sum(int array[size], int *p_index1, int *p_index2)
{
    int max_sum = array[0]+array[1];
    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] + array[i + 1] > max_sum)
        {
            max_sum = array[i] + array[i + 1];
            *p_index1 = i;
            *p_index2 = i+1;
        }
    }
    return max_sum;
}

int main()
{
    int array[size] = {1, 2, 6, 4, 5};
    int index1, index2;
    int sum = max_adjacent_sum(array, &index1, &index2);
    printf("\nMax sum found at index[%d] and index[%d]\n",index1, index2);
    printf("Maximum adjacent sum : %d",sum);

    // exit code
    return 0; // if execute successfully
}
