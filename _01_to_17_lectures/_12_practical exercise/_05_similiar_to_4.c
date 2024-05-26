/*Program objective
1) function receive length(l)
2) if (l < 10) print (l) - 1234..l
3) (l >= 10) print -> 99999_99999.. (l)times*/

#include <stdio.h>

void length_times_9(int num)
{
    if (num < 10)
    {
        for (int i = 1; i <= num; i++)
        {
            printf("%d ", i);
        }
        printf("\n\n");

    }

    else
    {
        for (int i = 0; i < num; i++)
        {
            printf("9");
        }
        printf("\n\n");
    }
}

int main()
{
    int num;
    printf("\nEnter the num : ");
    scanf("%d", &num);

    length_times_9(num);
}