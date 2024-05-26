/*Program objective
1) create a function
2) function receive 3 number
3) return their avg
*/

#include <stdio.h>

// important to specify float other wise 0 will return
float avg_of_3(int num1, int num2, int num3)
{

    float avg = (num1 + num2 + num3) / 3.0;
    return avg;
}

int main()
{
    int num1, num2, num3;

    printf("\nEnter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);
    printf("Enter num3 : ");
    scanf("%d", &num3);

    printf("\n....Calling the avg_of_3 function\n\n");

    printf("Average : %.1f \n\n", avg_of_3(num1, num2, num3));

    // exit
    return 0;
}
