/*Program will count the appearance of most repeat ASCII CHARACTER 
CHARACTERS can be (a-z),(A-Z),(whitespace characters)["!"-"/"]*/

#include <stdio.h>

int main()
{
    char array[] = {'a','A','b','B','c','c','c','%', ' ', ')'};
    int len_of_array = sizeof(array)/sizeof(array[0]);

    // we need an array to store the appearance count of all the character that appears in the array
    // 15 whitespace characters and 26*2 = 52[a-z,A-Z] character -> 67 characters

    int counting_array[67] = {0};

    // time to count and store the appearance of a character
    for (int i = 0; i < len_of_array; i++)
    {
        if (array[i] >= '!' & array[i] <= '/')
        {
            counting_array[array[i] - '!']++;
        }
        // index(1 - 14) will have whitespace character(total 15 characters)
        // so index(15 - 40) will have (a - z)(26) characters
        else if (array[i] >= 'a' & array[i] <= 'z')
        {
            counting_array[array[i] - 'a' + 15]++;
        }

        // index(15 - 40) will have (a - z) characters
        // so index(41 - 66) have (A - Z)(26) characters
        else if (array[i] >= 'A' & array[i] <= 'Z')
        {
            counting_array[array[i] - 'A' + 41]++;
        }
        
    }
    
    for (int i = 0; i < 66; i++)
    {
        printf("index(%d) : %d\n",i,counting_array[i]);
    }
    

    int max_index = 0;
    for (int i = 1; i < 67; i++)
    {
        if (counting_array[max_index] < counting_array[i])
        {
            max_index = i;
        }   
    }
    printf("Max Index : %d\n",max_index);
    // Now print the most appeared character
    if (max_index < 15) // means whitespace characters["!"-"/"]
    {
        printf("\nMost Repeated char : %c, Appeared : %d times",max_index + '!', counting_array[max_index]);
    }

    // if most appeared is "b" assume so we have index(16) as max_index
    // if we add 16 + 82 = 98(makes b)
    else if (max_index < 41) // means whitespace characters["!"-"/"]
    {
        printf("\nMost Repeated char : %c, Appeared : %d times",max_index + 82, counting_array[max_index]);
    }

    else
        printf("\nMost Repeated char : %c, Appeared : %d times",max_index + 22, counting_array[max_index]);

    
    
    // if successful exit
    return 0;
}