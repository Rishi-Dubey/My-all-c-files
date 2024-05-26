// take 3 number from the user and check their divisibility means atleast one of them divide other one

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    // user input 
    printf("\nEnter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    printf("Enter num3 : ");
    scanf("%d", &num3);

    // check if atleast one of them divide the other one
    if (num1%num2 == 0 || num2%num1 == 0)
    {
        printf("Divisible");
    }

    else if (num3%num2 == 0 || num2%num3 == 0)
    {
        printf("Divisible");
    }

    else if (num1%num3 == 0 || num3%num1 == 0)
    {
        printf("Divisible");
    }
    else {printf("Not divisible ):\n\n");}

    // switch (num1,num2,num3)
    // {
    // case num1/num2 == 0:
    //     printf("Num1 is divisible by Num2\b");
    //     break;
    
    // default:
    //     break;
    // }
    

    return 0;
}