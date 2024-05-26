/*Objective
1) A fx() -> takes index (n) return the corresponding value
2) of lucus sequence -> 2, 1, 3, 4, 7, 11 ....
3) if(n = 0) -> 2 , if(n == 1) -> 1
   for (n > 1) -> fx(n-1) + fx(n-2)*/

#include <stdio.h>

int lucus_value(int num)
{
    if (num == 0)
        return 2;

    else if (num == 1)
        return 1;

    else if (num > 1)
        return lucus_value(num - 1) + lucus_value(num - 2);
}

int simple_lucus(int num)
{
    int sum = 0;
    int counter = 0;
    int i0, i1;

    while (counter <= num)
    {
        if (counter == 0)
        {
            i0 = 2;
            sum += i0; 
            counter++; // increase counter(index) by 1
        }

        else if (counter == 1)
        {
            i1 = 1;
            sum += i1;
            counter++;
        }

        else
        {
            sum = i0 + i1;
            i0 = i1;
            i1 = sum;
            counter++;
        }
    }

    return sum;
}

int main()
{
    int num;
    printf("Enter index for lucus sequence value : ");
    scanf("%d", &num);

    int result = lucus_value(num);

    printf("\nLucus value at index(%d) : %d", num, result);

    int result2 = simple_lucus(num);
    printf("\nLucus value = %d", result2);
}