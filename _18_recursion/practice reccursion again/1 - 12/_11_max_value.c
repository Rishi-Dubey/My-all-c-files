#include <stdio.h>

int max(int len)
{
    int element;
    printf("Enter value for sequence : ");
    scanf(" %d", &element);

    if (len == 1)
        return element;

    int max_so_far = max(len - 1);

    if (max_so_far > element)
        return max_so_far;

    return element;
}

int main()
{
    int num;
    printf("Enter len for sequence : ");
    scanf("%d", &num);

    int result1 = max(num);
    printf("\nMax value : %d", result1);
    // if successful exit
    return 0;
}