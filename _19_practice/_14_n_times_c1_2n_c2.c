/*Objective
1) A fx() -> reveive:
          -  Total       : int
          -  character 1 : char -> print(totol times) char
          -  character 2 : char -> print(2 * total times) char
(total = 3, char1 = 'a', char2 = 'b')
so print => aaabbbbbb*/

#include <stdio.h>

void special_print(int total, char character1, char character2)
{
    if (total > 0)
    {
        printf("%c",character1);
        special_print(total -1 , character1, character2);
        // print twice times than character1
        printf("%c",character2);
        printf("%c",character2);
    }
    
}

int main()
{
    int total;
    char char1, char2;
    printf("Enter total : ");
    scanf("%d",&total);

    printf("Enter char1 : ");
    scanf(" %c",&char1);

    printf("Enter char2 : ");
    scanf(" %c",&char2);

    special_print(total, char1, char2);
}
