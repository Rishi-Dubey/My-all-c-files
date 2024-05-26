#include <stdio.h>

int main()
{
    // creating an array
    int array[4] = {1, 2, 3, 4};
    // int array[5] = {1,2}; // other will be 0

    // modify an element
    array[0] = 5;

    // Access -> only a single element at a time
    printf("\nElement first : %d \n", array[0]);

    // Accessing all the elements
    for (int i = 0; i < 4; i++)
    {
        printf("Array[%d] : %d \n", i, array[i]);
    }

    // Creating my name in c
    char name[11] = {'R', 'i', 's', 'h', 'i', ' ', 'D', 'u', 'b', 'e', 'y'};
    printf("My name : ");
    for (int i = 0; i < 11; i++)
    {
        printf("%c",name[i]);
    }
    printf("\n\n--------------");
    

    return 0;
}
