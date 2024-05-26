/*Objective
1) how to initialize a string
2) there are two methods
3) difference b/w string and string array
4) char array don't need the size compiler automaticaly get the size*/

#include <stdio.h>

int main()
{
    // by adding '/0' in end it becomes an "string" not the "char array"
    char string[] = {'R', 'i', 's', 'h', 'i', '\0'};

    for (int i = 0; i < 5; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n\n");
    // Another and better way

    // automatically adds the '/0' char in the end
    char string_01[] = "Rishi Dubey";

    // another way but have to count the (size of elements + '\0' )
    char string_02[12] = "Rishi Dubey"; // [12] one space for '\0' in the end

    int size_of_array = sizeof(string_02) / sizeof(string_02[0]);

    printf("\n\n");
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%c", string_02[i]);
    }

    // exit code
    return 0; // if execute successfully
}
