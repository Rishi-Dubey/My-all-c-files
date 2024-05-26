// Here I will store the the same value in differnt format
// means a in ASCII [character,decimal,hexadecimal] all have same values
// ASCII character written by '' or ""
// ASCII decimal written by just number - 43 or 93 etc
// ASCII hexadecimal written by 0x[hex_value] - 0xA9 etc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char value1 = 'a';  // in character form of ASCII
    char value2 = 97;   // in decimal form
    char value3 = 0x61; // in hexadecimal form
    // all the value should be same as they are same in ASCII table
    printf("\nValue in character : %c\n", value1); // will print the character value
    printf("Value in character : %c\n", value2);   // will print its decimal value
    printf("Value in character : %c\n", value3);

    // exit
    return 0;
}