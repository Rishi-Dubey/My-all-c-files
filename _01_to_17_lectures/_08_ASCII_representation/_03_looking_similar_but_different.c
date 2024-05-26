// Here I will store the similar looking values but they have differnt ASCII value

// ASCII character written by '' or ""
// ASCII decimal written by just number - 43 or 93 etc
// ASCII hexadecimal written by 0x[hex_value] - 0xA9 etc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char value1 = 9; // A tab character in ASCII character not visible in console or terminal
    char value2 = '9'; // single quote('') for single literal or error 
    // both are different
    // as 1st - just 9 is ASCII decimal value which have differnt ASCII char value
    // while the 2nt - '9' is ASCII character which have diffent decimal value.
    printf("\nValue 1 : %c\n", value1);
    printf("Value 2 : %c", value2); // will print just as we create because we create a char
                                // and print in char format

    // exit
    return 0;
}