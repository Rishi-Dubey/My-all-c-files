/*Objective
1) create a similar func as strcpy of string.h libaray
2) Implement it */

#include <stdio.h>
#include <string.h>

// Like a decleration will create after the main function
void strcopy(char *p_destination, char *p_original);

int main()
{
    // creating origianl and destination string
    char original[] = "Rishi Dubey";
    char destination[100];

    strcopy(destination, original);
    puts(destination);
    // if execute successfully
    return 0;
}

void strcopy(char *p_destination, char *p_original)
{
    int len = strlen(p_original);
    // printf("len : %d",len);

    int i = 0;
    while (p_original[i] != '\0')
    {
        p_destination[i] = p_original[i]; // copying one by one;
        i++;                              // increasing it by 1;
    }
    // after all adding '\0' in the end to make it string
    p_destination[i] = '\0';
}
