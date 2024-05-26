/*Objective
1) Create a fx() which will return the size of a given string

2) In main - > Take the string from the user
3) print the size of the string*/

#include <stdio.h>

/* receiving pointer of the first element of the string
same as char *str receiving the pointer of the first index
so any changes made with string will be reflected in the global string

to prevent this I can use int len(char str(const *str)) -> receives the pointer of the first
element but promise not to modify string in any case in the given func */

int len(char str[]) // -> getting the pointer of the first element of the string
{
    int lenght = 0;
    while (str[lenght] != '\0')
    {
        lenght += 1;
    }

    return lenght;
}

int main()
{
    char str[100];

    // userinput
    printf("\nEnter a string : ");
    gets(str);

    printf("\nLenght : %d\n\n", len(str));

    // exit code
    return 0; // if execute successfully
}
