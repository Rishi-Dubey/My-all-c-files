
#include <stdio.h>
#define size 11

void main()
{
    // ask for the multiplication table of 8 to 10

    int table[size][size];

    for (int i = 8; i < 10; i++)
    {
        for (int j = 1; j < size; j++)
        {
            printf("%d x %d = ",i,j);
            scanf("%d",&table[i][j]);
        
        }
        printf("\n");
        
    }
    printf("\n\n");

    // print table
    for (int i = 8; i < 10; i++)
    {
        for (int j = 1; j < size; j++)
        {
            printf("%5d",table[i][j]);
        }
        printf("\n");
    }
}