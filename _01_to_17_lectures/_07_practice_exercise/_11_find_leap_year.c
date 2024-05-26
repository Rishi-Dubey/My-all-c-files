// Check if the given year is leap or not

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nCheck if year is leaf year or not\n\n");

    int year;
    printf("Enter year : ");
    scanf("%d",&year);

    // check for leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d : Leaf Year", year);
    }

    else {printf("%d : Not a Leaf Year,", year);}

    return 0;

}