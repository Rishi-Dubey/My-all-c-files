/*Program will have an array of 20 int type value
2) program will print the most repeated element and how many times it repeat*/

#include <stdio.h>
#define size 20

int main()
{
    int array[size] = {0, 1, 0, 1, 2, 3, 3, 2, 4, 4, 5, 6, 5, 3, 6, 7, 7, 3, 4, 2};
    int counting_array[8] = {0};

    for (int i = 0; i < size; i++)
    {
        counting_array[array[i]]++;
    }

    int max = counting_array[0];
    int max_index;

    for (int i = 1; i < 8; i++)
    {
        if (counting_array[i] > max)
        {
            max = counting_array[i];
            max_index = i;
        }
    }
    
    printf("\nMost repeated element : %d ,REPEATED : %d times\n\n",max_index, counting_array[max_index]);
    
}