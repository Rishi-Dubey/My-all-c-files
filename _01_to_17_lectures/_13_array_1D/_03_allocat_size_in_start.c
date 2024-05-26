#include <stdio.h>
#define Size 7

int main()
{
    int array[Size];
    for (int i = 0; i < Size; i++)
    {
        printf("Enter value : ");
        scanf("%d",&array[i]);
    }

    printf("data in array : ");
    for (int i = 0; i < Size; i++)
    {
        printf("%d, ",array[i]);
    }
    printf("\n\n");
    

    return 0;
}
