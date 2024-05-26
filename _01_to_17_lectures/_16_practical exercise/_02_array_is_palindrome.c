
#include <stdio.h>

int check_panlindrome(int array[6])
{
    for (int i = 0; i < 6 / 2; i++)
    {
        if (array[i] != array[6 - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int array[6] = {1, 2, 3, 3, 2, 1,};

    // calling check_panlindrome function
    int ispalindrome_exits = check_panlindrome(array);
    if (ispalindrome_exits == 1)
    {
        printf("\nPalindrome exits\n");
    }
    else
        printf("Palindrome not exits");

    // exit code
    return 0; // if execute successfully
}
