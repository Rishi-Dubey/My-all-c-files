#include <stdio.h>

void main()
{
    // initialize a 2 D array like excel sheets

    // Standard way
    // type name[row][col] = {{element1,e2,... upto column}...(row)times}
    int array_2D[2][3] = {{1, 2, 3}, {3, 4, 5}};

    // Incomplete initialization
    int array_2d_02[3][2] = {{0, 1}, {2}};
    // here second row have one element mission so it will be zero and third row is also zero

    // confusion way but smart
    int array_2d_03[2][3] = {1, 2, 3, 4, 5};
    // so here {1,2,3} goes in first row and {4,5, 0(default)} in second row

    for (int i = 0; i < 2; i++)
    {
        printf("Array_2d_03[%d,%d] : [%d][%d] \n", i, i, *array_2d_03[i], *array_2d_03[i]);
    }
}
