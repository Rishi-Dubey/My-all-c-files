#include <stdio.h>

int main()
{
    int array1[3] = {23, 03, 2024};
    int copy_array[3];

    // printf("Original array : ");
    for (int i = 0; i < 3; i++)
    {
        copy_array[i] = array1[i];
    }
    printf("\n");

    printf("Copy array : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", copy_array[i]);
    }

    printf("\nDublicate array : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", array1[i]);
    }

    // exit code
    return 0; // if execute successfully
}
