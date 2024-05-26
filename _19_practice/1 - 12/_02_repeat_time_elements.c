/*Objective
1) A fx(p_array, char) -> return time of char repeated
2) user inputted array
3) ex- array = ['r','i','s','h','i','i'] , search = 'i' -> found (3) times repeated*/

#include <stdio.h>
#include <string.h>


int repeat(char *array, char search, int last_index)
{
    // int repeat = 0;

    if (last_index < 0)
    {
        return 0;
    }

    else if (array[last_index] == search) // found duplicate
    {   

        return 1 + repeat(array, search, last_index -1 );
    }

    else return // if nothing matches
        repeat(array, search, last_index -1 );
}

int main()
{
    char array[10000];
    int i = 0;

    printf("\n");
    while (1) // means True
    {
        printf("Enter char(%d) or (&) to stop : ", i);
        scanf(" %c", &array[i]);

        if (array[i] == '&')
            break;

        i++;
    }
    printf("\n");
    for (int j = 0; j < i; j++)
    {
        printf("%c, ", array[j]);
    }

    char search;
    printf("\nEnter char to search : ");
    scanf(" %c", &search);

    int result = repeat(array, search, i -1 ); // i -1 excluding the & char

    printf("\nFound char(%c) -> %d times",search, result);

    // if successful
    return 0;
}