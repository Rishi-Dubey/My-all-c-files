// Here I will use the while loops

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // print star(*)
    int count1 = 1;
    int count2 = 0;
    printf("\n\n");

    // while loop
    while (count1 <= 5)
    {
        while (count2 < count1)
        {
            printf("*");
            count2 += 1;
        }
        printf("\n");
        count1 += 1;
        count2 = 0;
    }

    // exit
    return 0;
}