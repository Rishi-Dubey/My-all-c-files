// Program will find the coordinate of the given number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nProgram will print tell the coordiante of given (x,y) point\n\n");

    int x, y;
    // user input for x and y
    printf("Enter (x, y) : ");
    scanf("%d,%d", &x, &y);
    printf("\n");

    // printf("x : %d \ny : %d", x, y);
    // checking the Quadrants

    if (x > 0 && y > 0)
    {
        printf("(%d, %d): First Quadrant\n\n", x, y);
    }

    else if (x < 0 && y >= 0)
    {
        printf("(%d, %d): Second Quadrant\n\n", x, y);
    }

    else if (x < 0 && y < 0)
    {
        printf("(%d, %d): Third Quadrant\n\n", x, y);
    }

    else if (x > 0 && y < 0)
    {
        printf("(%d, %d): Forth Quadrant\n\n", x, y);
    }

    else if (x == 0 && y == 0)
    {
        printf("(%d, %d): Center\n\n", x, y);
    }

    else printf("!!!Invalid Entry ):");

    return 0;
}