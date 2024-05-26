/*Program objective
1) function receive length(l)
2) (l = 5) print -> 99999 (l)times*/

#include <stdio.h>

void length_times_9(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("9");
    }
    printf("\n\n");   
}

int main()
{
    int num;
    printf("\nEnter the num : ");
    scanf("%d",&num);

    length_times_9(num);
}