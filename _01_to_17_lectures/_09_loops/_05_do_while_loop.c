// Do while loop executes alteast ones and then according to
// the loop condition I am doing good and what about you 

#include <stdio.h>

int main()
{
    // program that will ask for price of product and give Total sum
    // quit the program when user enter 0 means no more product

    int prize, total_prize = 0;

    do{
        printf("\nEnter price of product : ");
        scanf("%d",&prize);
        total_prize += prize;
    } while(prize > 0);

    // After loop 
    printf("\nTotal sum : %d", total_prize);
    // exit
    return 0;
    }