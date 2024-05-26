// I will receivce user input of the any data
// and print that in hexa decimal form

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;
    // userinput for all
    printf("Enter 'day : month : year ' : ");
    scanf("%d:%d:%d",&day,&month,&year);

    printf("\nDate in hexadecimal form : 0x%x:0x%x:0x%x\n\n",day,month,year);

    // exit 
    return 0;
}