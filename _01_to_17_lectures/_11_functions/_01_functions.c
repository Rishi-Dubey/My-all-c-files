// Here I will create a very basic function to print hello
// any function(f) = return_type function_name(parameters if any)

#include <stdio.h>
#include <stdlib.h>

void greeting()
{
    printf("I am writing this msg from the gretting function\n");
    printf("Hello World!!!\n");
}

int main()
{
    printf("\nI am inside the main function\n");
    printf("I am going to call  the greeting function \n\n");

    greeting();

    // exit
    return 0; // as main is expected to return int type 0 means false or terminated.
}