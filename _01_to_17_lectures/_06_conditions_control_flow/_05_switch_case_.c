// Print range according to the given grade by the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Enter Your grade : ");
    scanf("%c", &grade);

    // using switch but only for fix values not for the range of value
    switch (grade)
    {
    case 'A': // only single quotes are allowed for a single literal or string
        printf("You got number : 90-100\n");
        break;
    case 'B': // only single quotes are allowed for a single literal or string
        printf("You got number : 80-90\n");
        break;
    case 'C': // only single quotes are allowed for a single literal or string
        printf("You got number : 70-80\n");
        break;
    case 'D': // only single quotes are allowed for a single literal or string
        printf("You got number : 60-80\n");
        break;
    case 'F':
        printf("You are FAIL\n");
        break;

    default:
        printf("Some error happens");
        break;
    }
}