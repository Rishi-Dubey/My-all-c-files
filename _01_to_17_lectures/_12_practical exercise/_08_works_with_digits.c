/*Objective
1) function receive two numbers value , digit
2) like value = 1234, digit = 3, so print(2)-> value less than digit
3) also retun the value of those digits like return 1+2/2.0 */

#include <stdio.h>

float analyize_number(int value, int digit)
{
    int sum = 0, count = 0;
    float avg;
    int temp_value = value;
    while (value != 0)
    {
        int last_value = value % 10;

        if (last_value < digit)
        {
            sum += last_value; // values which are less their sum
            count += 1;        // how many values which is less
        }
        value = value / 10; // remove the last value with (python floor division equavalent)
    }
    avg = sum /(float)count;

    printf("\nCount of digit in %d which are less than %d : %d\n", temp_value, digit, count);
    return avg;
}

int main()
{
    int value, digit;
    printf("\nEnter any number : ");
    scanf("%d", &value);

    printf("Enter a single digit : ");
    scanf("%d", &digit);

    float avg = analyize_number(value, digit);
    printf("Average sum of digit which are less than %d : %.2f \n\n", digit, avg);

    return 0;
}
