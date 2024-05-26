#include "stdio.h"

int main(){
    int place_3, place_2, place_1, num;
    printf("Enter 3 Digit no. : ");
    scanf("%d",&num);

    place_3 = num/100;
    place_2 = (num / 10)%10;
    place_1 = (num%10);

    printf("\nHundred place : %d",place_3);
    printf("\nTens place : %d",place_2);
    printf("\nOne place %d",place_1);
    printf("\n");

    printf("\nOriginal Number  : %d\n",num);
    printf("Revevsed Number : %d%d%d\n\n",place_1,place_2,place_3);



    return 0;



}