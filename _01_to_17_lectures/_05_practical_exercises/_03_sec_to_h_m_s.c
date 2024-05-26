// Program will recevice user input in sec and covert it in H:M:S format 

#include "stdio.h"

int main(){
    int secs,hours,mins;
    printf("Enter Seconds : ");
    scanf("%d",&secs);

    // convert
    hours = secs/3600;
    secs = secs - hours*3600;

    mins = secs/60;
    secs = secs - mins*60;

    // result
    printf("Total time : 0%d:0%d:%d \n\n",hours,mins,secs);



}