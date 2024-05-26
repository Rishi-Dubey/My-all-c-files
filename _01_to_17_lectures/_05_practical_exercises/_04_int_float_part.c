#include "stdio.h"

int main(){
    int place_3, place_2, place_1, num;
    printf("Enter 3 Digit no. : ");
    scanf("%d",&num);
    // hours = (string)secs
    // printf("%.1d: %.2d : %.3d",secs,secs,secs);
    place_3 = num/100;
    place_2 = (num - place_3*100)/10;
    place_1 = (num - place_3*100 -place_2*10);

    printf("\nHundred place : %d",place_3);
    printf("\nTens place : %d",place_2);
    printf("\nOne place %d",place_1);

    printf("\nSum of all places : %d\n\n",(place_1+place_2+place_3));



    return 0;



}