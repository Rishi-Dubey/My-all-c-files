// Program will take the any date D:M:Y and print the next date

#include <stdio.h>
#include <stdlib.h>
// we can specify how many zeros we want before the no 
// like a num is "1" -> "%03d" means there digit should be so it -> "001"

int main()
{
    printf("\nProgram will print the the next date of the given date\n\n");

    int day, month, year;
    int year_type = 0; // leaf_year(1) True
    int flag = 1;      // false(0) if date is invalid

    printf("Enter Day : ");
    scanf("%d", &day);

    printf("Enter month : ");
    scanf("%d", &month);

    printf("Enter year : ");
    scanf("%d", &year);

    // check for leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        year_type = 1; // 1 - True for leap year
    }

    else year_type = 0;

    //<<<<<<<<<<<<< set day, month , year accordingly >>>>>>>>>>>>>>>>>>

    // for feb month exception
    if ((month == 2) && (day == 29) && (year_type == 1))
    {
        month += 1;
        day = 1;
    }
    // for feb 28
    else if (month == 2 && (day == 28) && (year_type == 1))
    {
        day += 1;
    }

    // for normal feb
    else if (month == 2 && (day <= 27 && day > 0))
    {
        day += 1;
    }

    // for months of 31 days
    else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) ||
             (month == 8) || (month == 10) || (month == 12))
    {
        if (day == 31 && month == 12) // for last month exception
        {
            day = 1;
            month = 1;
            year += 1;
        }

        else if (day <= 30 && day > 0) // for most regular case
        {
            day += 1;
        }

        else if (day == 31)
        {
            day = 1;
            month += 1;
        }
    }

    // for months of 30 days
    else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
    {
        if (day <= 29 && day > 0) // for most regular case
        {
            day += 1;
        }

        else if (day == 30)
        {
            day = 1;
            month += 1;
        }
    }

    else // if nothing matches
    {
        flag = 0;
    }

    printf("\n%d:%d:%d\n\n", day, month, year);
    // print the next date

    if (flag == 1) // No error means correct user_input
    {
        printf("%02d:", day);
        printf("%02d:", month);
        printf("%04d", year);
    }

    else printf("Invalid Date ):");
        return 0;
}
    

    //     else if (year >= 100 && year < 1000) // when 100 <= year > 1000
    //     {
    //         printf("0%d", year);
    //     }

    //     else if (year >= 10 && year < 100) // when 10 <= year > 100
    //     {
    //         printf("00%d", year);
    //     }
    //     else if (year >= 0 && year < 10) // when 0 <= year > 10
    //     {
    //         printf("000%d", year);
    //     }
        
    // }

    // else
    //     printf("!!! Invalid Date");

    // return 0;