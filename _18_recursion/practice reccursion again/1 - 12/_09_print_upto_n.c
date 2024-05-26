#include <stdio.h>

void upto_n(int num)
{
    if (num == 0)
    {
        printf("%d\n",0);
        return;
    }
    
    upto_n(num - 1);
    printf("%d\n",num);
}

int main()
{
    upto_n(4);
    // if successful exit
    return 0;
}