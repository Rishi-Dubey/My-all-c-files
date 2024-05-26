/*Program will get input char from the user and check and print 
if it is a lower,uppercase or a digit accordingly*/
// every charcter starts with ''quotes or double quotes for multiple values

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("\nEnter a single character to check : ");
    scanf("%c",&character);

    // checking it
    if (('a' <= character ) && (character<= 'z'))
        printf("%c: Lowercase\n\n",character);

    else if (('A' <= character) && (character <= 'Z'))
        printf("%c: Uppercase\n\n",character);

    else if (('0' <= character) && ( character <= '9'))
        printf("%c: Digit\n\n",character);

    else 
        printf("%c: Other\n\n",character);
}