/*Objective
1) Use of strlib
2) different func in this library to work with strings
3) like copy, length, compare, concatenate etc.*/

#include <stdio.h>
#include <string.h> // library to work with string

int main()
{
    // creating an string
    char string_01[] = "Rishi Dubey 2005";

    // int length = strlen(string); // strlen is a func to get len of the string
    // printf("\n\nLength : %d\n\n",length);


    // char string_02[] = "" ; // a empty sting

    // // creating an copy of string_01
    // strcpy(string_02, string_01); // destination(where copy should go), from where to copy(source)

    // puts(string_02);


    char str_03[] = "Hello ";
    char str_04[] = "World";

    // // concationate i.e add two strings
    // strcat(str_03, str_04); // -> str_04 will be added to str_03 -> str_03 = str_03 + str_04.
    // printf("\n\n");
    // puts(str_03);

    // checks if both strings is equal
    char str_05[] = "Rishi";
    char str_06[] = "Rahul";

    // RETURN 0 IF SAME OR (-1 AND 1) BASES ON SIZE COMPARISION.
    printf("\nAre the same %d\n",strcmp(str_05, str_05));

    // exit code
    return 0; // if execute successfully
}
