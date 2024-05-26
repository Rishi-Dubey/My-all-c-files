#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 1, num2 = 10 , num3;
    // if num1 > num3 then execute (num1 + num2) else execute (num1 - num2)
    num3 = num1 > num2 ? (num1 + num2) : (num1 - num2);
    num1 > num3 ? printf("Hello\n") : printf("Bye\n"); // like short hand if-else
    printf("num 3 : %d",num3);
    return 0;
}