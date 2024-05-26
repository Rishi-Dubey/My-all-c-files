#include <stdio.h>

int main()
{
    printf("\nEnter you phone number one by one below\n");
    // Init an array
    int phone_number[5];

    int max = 0;
    int index;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &phone_number[i]);

        if (phone_number[i] > max)
        {
            max = phone_number[i];
            index = i; // max value index str
        }
    } 
    printf("Your Ph.no. : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", phone_number[i]);
    }
    printf("\n");

    printf("\nmax value at index(%d) : %d\n\n", index, max);

    return 0;
}
