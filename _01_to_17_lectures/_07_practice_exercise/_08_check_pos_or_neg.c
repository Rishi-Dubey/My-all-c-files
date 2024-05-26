// Here I will print the order of the given 3 digit no if it is ascending or not
// 123 -> Ascending order

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // printf("Hello world");
    printf("\nCheck number for positive, negative and zero\n\n");
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    // check if num is + or - or 0;
    if (num > 0)
    {
        printf("%d: Positive",num);
    }

    else if (num < 0)
    {
        printf("%d: Negative",num);
    }

    else
    {
        printf("%d: Zero",num);
    }
    
    return 0;
}