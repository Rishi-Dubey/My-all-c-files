// Here I will store a english character and print it int differnet format
// ASCII character written by '' or ""
// ASCII decimal written by just number - 43 or 93 etc
// ASCII hexadecimal written by 0x[hex_value] - 0xA9 etc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // creating a character 'a' for single character we use only '' single quotes
    char value = 'z'; // store in binary form in some random location

    printf("\nValue in character         : %c\n", value); // will print the character value
    printf("Value in ASCII decimal     : %d\n", value);   // will print its decimal value
    printf("Value in ASCII hexadecimal : %x\n", value);   // will print its hexadecimal value

    // exiting
    return 0;
}