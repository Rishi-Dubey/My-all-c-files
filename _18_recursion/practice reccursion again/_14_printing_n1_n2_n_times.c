#include <stdio.h>

void simple_printing(int total, int num1, int num2)
{
    if (total > 0)
    {
        printf("%d", num1);
        simple_printing(total - 1, num1, num2);
        printf("%d", num2);
    }
}

int main()
{
    simple_printing(4, 1, 3);
    // if successful exit
    return 0;
}