/*Program will receive an number(n) from the user and then
will get the input of numbers (n)times from the user
program will check if they are stictly ascending or not */

#include <stdio.h>

int main()
{
    int num, current_value, previous_value = 0, flag = 1;
    printf("\nEnter how long sequence ? : ");
    scanf("%d", &num);

    for (int k = 1; k <= num; k++)
    {
        printf("Enter number %d : ", k);
        scanf("%d", &current_value);

        if (current_value <= previous_value)
        {   
            flag = 0;
            printf("\nNot Ascending as %d >= %d \n\n", previous_value, current_value);
            break;
        }

        previous_value = current_value; // previous becomes current.
    }

    if (flag == 1)
    {
        printf("\nStrictly Ascending order (: \n\n");
    }
}