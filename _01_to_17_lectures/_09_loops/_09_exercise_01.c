// print a right angle triangle of number given by user
// input number is equal to number of rows

#include <stdio.h>

int main()
{
    int number;
    printf("\nEnter the number of rows : ");
    scanf("%d",&number);
    printf("\n");

    // pattern numbers change
    for (int i = 1; i <= number; i+=1)
    {
        for (int j = 1; j <= i; j += 1)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n\n");

    // pattern numbers are same
    for (int i = 1; i <= number; i+=1)
    {
        int l = i;
        while (l != 0)
        {
            printf("%d",i);
            l -= 1;

        }
        printf("\n");
    }
    printf("\n\n");


    // exit
    return 0;
}