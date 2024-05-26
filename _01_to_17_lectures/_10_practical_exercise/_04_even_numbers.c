// Program will print the total (n) even numbers staring from 2
// n will be user input

#include <stdio.h>

int main()
{
    int num;
    printf("\nHow many even no. ? ");
    scanf("%d", &num);

    printf("\n%d Even number \n",num);
    for (int i = 2; num != 0; i += 2)
        {
            printf("%d, ",i);
            num -= 1;
        }
    printf("\n\n");

    // exit
    return 0;
    
}