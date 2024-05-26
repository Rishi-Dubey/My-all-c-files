#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter your grade : ");
    scanf("%d", &grade);

    // If else here we use terminator after the end - ; of the whole if/else block
    if (grade >=33)
        printf("Congratulation You are pass");

    else
        printf("Fail you are fail\n\n");

    return 0; // Exit
}