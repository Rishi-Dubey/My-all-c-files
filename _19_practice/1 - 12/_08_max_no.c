/*Objective
1) A fx() -> return max value
2) Receive the len for sequence
3) And then sequence*/

#include <stdio.h>

// int max(int num, int index, int max_value)
// {
//     if (num > 0)
//     {

//         int element;
//         printf("Enter at index(%d) : ", index);
//         scanf("%d", &element);
//         if (index == 0)
//         {
//             max_value = element;
//         }

//         index++;
//         if (max_value < element)
//         {
//             max_value = element;
//         }
//         return max(num - 1, index, max_value);
//     }
//     return max_value;
// }


int improved_max(int num)
{
    int value;
    printf("Enter value : ");
    scanf("%d", &value);

    int max_so_far;

    if (num > 1)
    {
        max_so_far = improved_max(num - 1); // recurssion call (with num -1)

        if (value > max_so_far)
            return value;

        else if (max_so_far > value)
            return max_so_far;
    }

    return value; // when we get to last value
}
int main()
{
    int num;
    printf("Enter len for sequence : ");
    scanf("%d", &num);

    // int result = max(num, 0, 0);
    // printf("\nMax value : %d", result);

    int result1 = improved_max(num);
    printf("\nMax value : %d", result1);

    // if successfull
    return 0;
}