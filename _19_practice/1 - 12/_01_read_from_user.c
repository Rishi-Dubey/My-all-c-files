/*Objective
1) A fx() of recursion that rec -> int num
2) main receives sequence of num until encounter (-1)
3) fx() return how many value are smaller than num
4) ex -> num = 5, seq = 1,4,2,6 so return -> (3) as only 1,2,3 is smaller than 5*/

#include <stdio.h>

int compare(int *array, int last_index, int num)
{
    if (last_index < 0)
    {
        return 0;
    }

    if (array[last_index] < num)
    {
        last_index--;
        return 1 + compare(array, last_index, num);
    }

    else
    {
        last_index--;
        return compare(array, last_index, num); // repeat again with diff index
    }
}

int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);
    printf("\n");

    int sequence[1000]; // to store numbers
    int i = 0;
    printf("Sequence of num until (-1)\n");
    while (i < 1000)
    {
        printf("Enter num %d : ", i);
        scanf("%d", &sequence[i]);

        if (sequence[i] == -1)
            break;

        i++;
    }

    int result = compare(sequence, i - 1, num);
    printf("\nTotal Num smaller than %d : %d", num, result);

    // if successful
    return 0;
}