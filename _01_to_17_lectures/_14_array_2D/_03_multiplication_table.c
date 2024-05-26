#include <stdio.h>
#define size 11
// for table size is 11 as row,column starts from 0 -> 10 total 11 in size

void main()
{
    int table[size][size];

    // filling the table
    for (int i = 0; i < size; i++) // row means like 2 x column , 2 x column
    {
        for (int j = 0; j < size; j++)
        {
            table[i][j] = i * j; // as 2 x 0, 2 x 1, 2 x 3 ... 2 x 10
        }
    }

    // print table
    for (int i = 1; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            printf("%5d",table[i][j]);
        }
        printf("\n");
    }
    
}
