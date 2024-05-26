/*Objective
1) how to read from user
2) how to print string like in python
3) problem in scanf userinput */

#include <stdio.h>

int main()
{
    // simple way to print the string just like in python
    char string[15] = "Rishi Dubey";
    printf("\nMy name : %s \n",string);

    // user input for the string
    // scanf take only string until it encounter and "space" character so it will not take
    // any word after space ex - user_enter = Rishi Dubey -> store only Rishi

    /*
    char user_string[100];
    printf("\nEnter something : ");
    scanf("%s",user_string);

    printf("\nUser input : %s",user_string);
    */

    /*Note 
    1) gets and puts can only use with strings as it add "\0" in the end*/
    // Need to use the gets func for userinput
    char user_string[100];
    printf("Enter anything : ");
    gets(user_string);

    // Instead of using printf we can use puts(automatically adds "\n" at the end also short)
    puts(user_string);
}
