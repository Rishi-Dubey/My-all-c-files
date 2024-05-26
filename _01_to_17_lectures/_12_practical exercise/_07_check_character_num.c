/*Objective
1) function receives 3 characters not numbers
2) print them together if they are number like '1','2','5' -> 125
3) else return -1 */
// we can get num = char = '5' so we can use char-'0' we will get 5 in int

#include <stdio.h>

int characters_together(char c1, char c2, char c3)
{
    if ((c1 >= '0' && c1 <= '9') && (c2 >= '0' && c2 <= '9') && (c3 >= '0' && c3 <= '9'))
    {
        printf("\n%c%c%c \n\n",c1,c2,c3);
    }

    else
        return -1;
}

int main()
{
    char c1, c2, c3;
    printf("Enter single numbers sep(,) : ");
    scanf("%c,%c,%c", &c1, &c2, &c3);

    int flag = characters_together(c1, c2, c3);
    

    return 0;
}
