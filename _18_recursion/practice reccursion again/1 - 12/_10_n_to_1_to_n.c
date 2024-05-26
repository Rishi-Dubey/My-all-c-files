#include <stdio.h>

void counting(int num)
{
    if (num > 0)
    {
        printf("%d, ",num);
        counting(num - 1);
        if (num == 1)
        {
            return;
        }
        else
            printf("%d, ",num);
    }
}

int main()
{
    counting(5);
    // if successful exit
    return 0;
}