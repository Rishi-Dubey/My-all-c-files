/*Program objective
1) function will receive a char 'A' or 'a'
2) if char is lower return its uppercase value
3) else return -1*/

#include <stdio.h>

char to_upper(char string)
{
    if (string >= 'a' && string <= 'z')
    {
        char uppercase = (int)string - 32;
        return uppercase;
    }
    else
        return -1;
}

int main()
{
    char value;
    printf("\nEnter a single alphabet(lowercase) : ");
    scanf("%c",&value);

    char uppercase = to_upper(value);
    if (uppercase != -1)
        printf("lowercase(%c) -> (%c)uppercase \n\n",value,uppercase);
    
    else
        printf("Invalid not lowercase value ): \n\n");
}