// Sum upto num samd

#include <stdio.h>

// A function
int sum_upto_num(int num)
{
    if (num == 0)
    {
        return num;
    }
    return num + sum_upto_num(num -1);
}

int main()
{
    printf("\nSum upto 10 : %d\n",sum_upto_num(10));
}