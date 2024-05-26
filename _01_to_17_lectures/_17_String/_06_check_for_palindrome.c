/*Objective
1) a function which will check if the given string is palindrome or not
2) WoW -> panlindrome , not -> not palindrome*/

#include <stdio.h>
#include <string.h> // Include for string manipulation functions

void is_palindrome(char *p_word, char *p_is_palindrome)
{
    // creating a string
    char rev_str[100];
    strcpy(rev_str, p_word); // get the copy in rev_str;

    // now to reverse the rev_str
    strrev(rev_str); // func to rev the given str

    int result = strcmp(rev_str, p_word); // comparing both string(0 if same , else -1 or 1)

    if (result == 0)
    {   
        // method to overwrite a string
        strcpy(p_is_palindrome, "True");
    }
}

int main()
{
    char word[100];
    printf("Enter a word : ");
    gets(word);

    char is_palin[] = "False"; // assume that not a palindrome

    is_palindrome(word, is_palin); // turns is_palin "True" if the word is palindrome

    if (strcmp(is_palin, "True") == 0) // check if its equal to 0
    {
        printf("\n%s : Palindrome\n\n", word);
    }
    else
        printf("\n%s : Not Palindrome\n\n", word);

    // if successfull
    return 0;
}