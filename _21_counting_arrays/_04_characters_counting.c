#include <stdio.h>

int main()
{
    char my_array[] = {'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e', 'a', 'a', 'a'};

    int len = sizeof(my_array) / sizeof(my_array[0]);
    printf("Len of array : %d\n", len);

    /*index(0) -> store(a).... index(4) -> store(e)*/
    int counting_array[5] = {0};

    char a = 'a';
    printf("ASCII DECIMAL VALUE OF 'a' : %d\n", a);

    // storing the count of appearance of all char in my_array[]
    for (int i = 0; i < len; i++)
    {
        counting_array[my_array[i] - 'a']++;
    }

    // getting the most repeated item
    int index_of_max = 0; // assume

    for (int i = 0; i < 5; i++)
    {
        if (counting_array[i] > counting_array[index_of_max])
        {
            index_of_max = i;
        }
    }

    printf("Most repeated char: %c \nTotal Appearance : %d times\n\n",index_of_max+'a',counting_array[index_of_max]);

    // if successful exit
    return 0;
}