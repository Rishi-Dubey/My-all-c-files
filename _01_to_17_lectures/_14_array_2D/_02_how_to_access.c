#include <stdio.h>

void main()
{
    // confusion way but smart
    int array[2][3] = {1, 2, 3, 4, 5};
    // so here {1,2,3} goes in first row and {4,5, 0(default)} in second row

    for (int i = 0; i < 2; i++) // for rows
    {
        printf("[");
        for (int j = 0; j < 3; j++) // for columns
        {
            if (j == 2)
                printf("%d", array[i][j]);

            else
                printf("%d ,", array[i][j]);
        }
        printf("]\n");
    }
}
