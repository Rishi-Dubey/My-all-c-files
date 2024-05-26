#include <stdio.h>
#define size 7

int main()
{
    // int array[size] = {0, 1, 2, 4, 1, 0, 1};
    // int count_1 = 0, count_0 = 0;

    // for (int i = 0; i < size; i++)
    // {
    //     if (array[i] == 1)
    //     {
    //         count_1 += 1;
    //     }
    //     else if (array[i] == 0)
    //     {
    //         count_0 += 1;
    //     }
    // }

    // printf("Count of 0 : %d",count_0);
    // printf("\nCount of 1 : %d",count_1);

    /*-------------NEW WAY--------------*/
    int array[size] = {0, 1, 2, 2, 1, 0, 1};
    int count[3] = {0}; // Here index(0) -> stores count of (0) and index(1) count of (1) so on.

    for (int i = 0; i < size; i++)
    {
        // since we know that array have only 0,1,2 so we get count[0],count[1],count[2] and
        // we increase it by 1 every time we encounter 0,1,2 in array.

        count[array[i]]++; 
    }
    
    // print the count of 0 ,1, 2;
    for (int i = 0; i < 3; i++)
    {
        printf("Count of %d : %d\n",i,count[i]);
    }
    

    // if successful exit
    return 0;
}