// program will find the max and min in user inputed 3 numbers

#include <stdio.h>
#include <stdlib.h>

// In c "And" - && , "or" - ||, "Not" - ! 

int main()
{
    double num1, num2, num3 ;
    // user input 
    printf("Enter num1 : ");
    scanf("%lf",&num1);

    printf("Enter num2 : ");
    scanf("%lf",&num2);

    printf("Enter num3 : ");
    scanf("%lf",&num3);
    printf("\n\n");

    // check for max
    if (num1 > num2 && num1 > num3)
        printf("Max : %.2lf\n\n",num1);

    else if (num2 > num1 && num2 > num3)
        printf("Max : %.2lf\n\n",num2);

    else if (num3 > num1 && num2 < num3)
        printf("Max : %.2lf\n\n",num3);
    
    // check for min
    if (num1 < num2 && num1 < num3)
    {
        printf("Min : %.2lf\n\n",num1);
    }
    
    // if (num1 < num2 && num1 < num3)
    //     printf("Min : %.2lf\n\n",num1);
    
    else if (num2 < num1 && num2 < num3)
        printf("Min : %.2lf\n\n",num2);

    else if (num3 < num1 && num2 > num3)
        printf("Min : %.2lf\n\n",num3);

    return 0 ; 

}