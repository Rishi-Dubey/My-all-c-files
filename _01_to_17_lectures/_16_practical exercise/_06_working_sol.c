

#include <stdio.h>
#define size 11
int main()
{
    int array[size] = {1, 2, 7, 3, 7, 7, 7, 8, 8, 9, 9};
    int count_non_unique = 0;
    int array_of_non_unique[size] = {0}; // array of zeros
    int flag = 0;                        // false if dubilcate with not repeated dubilcate

    for (int i = 0; i < size; i++) // for accessing all element of the array
    {
        flag = 0;
        for (int j = i+1; j < size; j++) // for check a element with all other elements
        {
            // if (i == j) // do match with it self
            //     continue;

            if (array[i] == array[j]) // if found dublicate or more copy
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            array_of_non_unique[i] = array[i]; // adding that dublicate
            for (int k = 0; k < size; k++)
            {
                if (i == k) // just added ignore find if it present anywhere else
                {
                    continue;
                }

                else if (array_of_non_unique[k] == array[i]) // if dublicate is regestered again
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            count_non_unique ++;
        }
        
    }
    printf("\nTotal non unique values : %d\n", count_non_unique);

    // exit code
    return 0; // if execute successfully
}
