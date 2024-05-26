// 1234 -> 1 + 2 + 3 + 4 = 10

#include <stdio.h>

int digits_sum(int num)
{
    if (num < 10)
    {
        return num;
    }
    
    return num % 10 + digits_sum(num / 10);
}


int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Sum of %d : %d\n",num, digits_sum(num));
}