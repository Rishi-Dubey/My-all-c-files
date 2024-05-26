/*Objectiv
1) A fx() -> print n to 1 then to n
2) num = 4 so -> 4,3,2,1,2,3,4*/

#include <stdio.h>

void fx(int num)
{
    if (num == 1) // want to print (1) only single time
    {
        printf("%d, ",num);
    }
    
    else if (num > 1)
    {
        printf("%d, ",num);
        fx(num-1);
        
        printf("%d, ",num);
    }
    
}

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    fx(num);
    // if successfull
    return 0;
}