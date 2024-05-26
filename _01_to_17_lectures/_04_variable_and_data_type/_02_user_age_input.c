// Here I will calculate the user Birth year

#include "stdio.h"

int main()
{
    int current_year;
    int user_age;
    // creating input for user-age and current-age
    printf("Your age : ");
    scanf("%d", &user_age);

    printf("Current Year : ");
    scanf("%d", &current_year);

    printf("\nYour DOB : %d", current_year - user_age-1);

    // Exit
    return 0;
}