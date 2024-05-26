// Program that will print the numbers upto the given number
// in both simple and reverse order 

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    // print the numbers upto the given numbers from 0
    printf("\nAscending order \n");
    for (int i = 0; i <= num; i++)
    {   
        if (i == num)
            printf("%d\n",i);
        else
            printf("%d, ",i); 
    }

    printf("\nDecending order \n");
    for (int i = num; i >= 0; i--)
    {   
        if (i == 0)
            printf("%d\n",i);
        else
            printf("%d, ",i); 
    }
    printf("\n\n");
}