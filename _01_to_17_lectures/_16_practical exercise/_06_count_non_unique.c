

// #include <stdio.h>
// #define size 11
// int main()
// {
//     int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 9};
//     int count_non_unique = 0;
//     int array_of_non_unique[size] = {0};

//     for (int i = 0; i < size; i++) // for accessing all element of the array
//     {
//         for (int j = 0; j < size; j++) // for check a element with all other elements
//         {
//             if (i == j) // do match with it self
//                 continue;

//             else if (array[i] == array[j]) // if found dublicate or more copy
//             {
//                 array_of_non_unique[i] = array[i];
//                 break;
//             }
//         }
//     }
//     printf("\nTotal non unique values : %d\n", count_non_unique);

//     // exit code
//     return 0; // if execute successfully
// }

#include <stdio.h>
#define size 11

int main()
{
    int array[size] = {1, 1, 7, 7, 1, 7, 7, 8, 8, 9, 9};
    int count_non_unique = 0;
    int array_of_non_unique[size] = {0}; // Initialize to zero
    int flag[size] = {0};                // Flag array to track whether a value has been counted

    for (int i = 0; i < size; i++) // for accessing all element of the array
    {
        if (flag[i] == 1)
        {
            continue; // Skip if the value has already been counted as non-unique
        }

        int j = i + 1;
        while (j < size && array[j] == array[i])
        {
            flag[j] = 1; // Mark the duplicate value as counted
            j++;
        }

        if (j - i > 1)
        {
            array_of_non_unique[i] = array[i]; // Register the non-unique value
            count_non_unique++;                // Increment count if the value is non-unique
        }
    }

    printf("\nTotal non-unique values: %d\n", count_non_unique);

    // exit code
    return 0; // if execute successfully
}
