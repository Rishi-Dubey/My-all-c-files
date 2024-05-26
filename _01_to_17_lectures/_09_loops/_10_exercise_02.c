/* program which will show the best option between the choice to choose 
1 cent which double daily for 30 days for 1 million dollar but will not increase. */ 

#include <stdio.h>

int main()
{
    int total_cent = 1;
    int million = 1000000;

    for (int i = 1; i <= 30; i++)
    {
        total_cent += total_cent;
    }

    int total_dollar = total_cent/100;
    printf("Total dollars after month : %d \n",total_dollar);
    printf("Total money if choose million : %d \n", million);
    
    printf("Total profit if choose 1 cent option : %d\n\n",total_dollar-million);
}