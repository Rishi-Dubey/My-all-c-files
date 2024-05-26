#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Find Odd or Even \n\n");

    // user input
    int num;
    printf("Enter num : ");
    scanf("%d",&num);

    // check if it even or odd
    if (num % 2 == 0 && num != 0)
        printf("%d : Even\n\n", num);
    
    else if (num % 2 != 0)
        printf("%d : Odd\n\n", num);
    
    else
        printf("!!! Invalid Number ):\n\n");
    

    return 0 ; // exit
}