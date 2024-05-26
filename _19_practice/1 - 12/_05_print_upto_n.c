/*Objective
1) fx() -> get the number
2) print upto n
3) like num = 4 so 1,2,3,4*/

#include <stdio.h>

void upto_n(int num, int init_point)
{
    if (init_point < num)
    {
        init_point++;
        if (init_point == num)
        {
            printf("%d\n", init_point);
        }

        else
        {
            printf("%d, ", init_point);
            return upto_n(num, init_point);
        }
    }
}

void one_to_n(int num)
{
    if (num > 0)
    {
        one_to_n(num -1); // reverse reccursion last will print first

        printf("%d, ",num); // we reccursion ends this will run
    }
    
}

int main()
{
    int num;
    printf("Enter num : ");
    scanf("%d", &num);

    upto_n(num, 0);

    printf("\n\n");

    one_to_n(num);
    // if successfull
    return 0;
}