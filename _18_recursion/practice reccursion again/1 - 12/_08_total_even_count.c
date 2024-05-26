#include <stdio.h>

int even_sum()
{
    int num;
    printf("Enter number or quit(-1) : ");
    scanf("%d", &num);

    if (num == -1) // Base or exit case
    {
        return 0;
    }

    else if (num % 2 == 0)
    {
        return num + even_sum();
    }

    return even_sum();
}

int main()
{
    int result = even_sum();
    printf("\nEven Count : %d", result);
    // if successful exit
}