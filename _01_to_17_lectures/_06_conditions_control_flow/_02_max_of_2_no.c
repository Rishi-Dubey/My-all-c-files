#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1 , num2;

    // user input
    printf("Enter num1 : ");
    scanf("%lf",&num1);

    printf("Enter num2 : ");
    scanf("%lf",&num2);

    // check and print max of two
    if (num1 > num1)
        printf("num1 : %.1lf > num2 : %.1lf\n\n",num1,num2);
    
    else if (num1 == num2)
        printf("num1 : %.1lf = num2 : %.1lf\n\n",num1, num2);

    else
        printf("num2 : %.1lf > num1 : %.1lf\n\n",num2,num1);
    

    return 0; // exit
}