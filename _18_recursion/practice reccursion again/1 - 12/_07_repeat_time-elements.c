/*Objective
1) A fx(p_array, char) -> return time of char repeated
2) user inputted array
3) ex- array = ['r','i','s','h','i','i'] , search = 'i' -> found (3) times repeated*/

#include <stdio.h>

int repeated_times(char *p_array, char search, int last_index)
{
    if (last_index < 0)
    {
        return 0;
    }

    else if (p_array[last_index] == search)
    {
        return 1 + repeated_times(p_array, search, last_index - 1);
    }

    return repeated_times(p_array, search, last_index - 1);
}

int main()
{
    char array[10] = {'R','I','S','H','I'};
    int result = repeated_times(array, 'I', 4);

    printf("Result : %d",result);

}