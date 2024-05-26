/*Objective
1) a function which will compare two string
2) return 0 if both same 1 for (str1 > str2) else -1
3) funtion is copy of strcmp in string.h library*/

#include <stdio.h>

int strcmp(char *p_str1, char *p_str2);

int main()
{
    // creating two string for comparasion

    char str1[] = "Rishi Dubey";
    char str2[] = "Rishi Dubey";

    int result = strcmp(str1, str2);
    printf("\nResult : %d", result);
}

int strcmp(char *p_str1, char *p_str2)
{
    int i = 0, flag = 0;

    while (flag == 0 && p_str1[i] != '\0' && p_str2[i] != '\0')
    {
        if (p_str1[i] > p_str2[i]) // comparing ASCII value
        {
            flag = 1;
        }

        else if (p_str1[i] < p_str2[i])
        {
            flag = -1;
        }

        i++;
    }

    // checking if one string is not shorter than other
    // in case of Rishi, Rishi Dubey result would be 0 by above logic so
    // we need to check their len also

    if (flag == 0) // like the are same [Rishi],[Rishi Dubey] upto Rishi they are same
    {
        if (p_str1[i] == '\0' && p_str2[i] != '\0') // means str1 < str2
        {
            return -1;
        }

        else if (p_str1[i] != '\0' && p_str2[i] == '\0') // means str1 > str2
        {
            return 1;
        }
    }

    return flag;
}
