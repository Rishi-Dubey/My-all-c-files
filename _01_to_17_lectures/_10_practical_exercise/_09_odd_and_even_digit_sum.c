// program will take the an number as an input and will print the sum of its odd
// and even digits

#include <stdio.h>

int main()
{
    int num, even_sum = 0, odd_sum = 0;

    printf("\nEnter number : ");
    scanf("%d", &num);

    int temp_num = num;
    while (temp_num != 0)
    {
        // accessing the last digit of the user_inputed number
        int last_digit = temp_num % 10;
        if (last_digit % 2 == 0)
        {
            even_sum += last_digit;
        }

        else
        {
            odd_sum += last_digit;
        }

        // removes the last digit after the use above 2 last -> last;
        temp_num = temp_num / 10;
    }

    printf("\nEven and odd sum of digit number : %d", num);
    printf("\nEven Sum : %d\n", even_sum);
    printf("Odd Sum : %d\n\n", odd_sum);
}