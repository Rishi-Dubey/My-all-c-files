#include <stdio.h>

int main()
{
    int array[] = {5, 6, 7, 8, 9, 10, 5, 5, 6};
    int counting_array[6] = {0};

    /*So here we can't map like we do
    since elements are 5,6..
    so we will map 5-> index(0), 6-> index(1)... 10 ->index(5)
    one thing to note here value(5) - index(0) -> (5) each time
    */

    for (int i = 0; i < 9; i++)
    {
        counting_array[array[i] - 5]++; // like counting_array[6-5]++
    }

    for (int i = 0; i < 6; i++)
    {
        printf("Count of %d : %d\n", i + 5, counting_array[i]);
    }

    // if successful exit
    return 0;
}