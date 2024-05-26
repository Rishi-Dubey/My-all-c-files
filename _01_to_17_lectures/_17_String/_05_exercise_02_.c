/*Objective
A function which will print the number of words in the string not the (index+1 i.e length)*/

#include <stdio.h>

int str_words(char *string) // -> pointer of first index of the string
{
    int count = 0, i = 0;

    while (string[i] != '\0')
    {
        if (string[i] == ' ')
        {
            count += 1;
        }
        i++;
    }
    return count+1 ; // for the last word because there is no whitespace after the last word.
}

int main()
{
    char user_input[100000];
    printf("Write Anything : ");
    gets(user_input);

    printf("\nTotal words : %d\n\n", str_words(user_input));

    // exit code
    return 0; // if execute successfully
}
