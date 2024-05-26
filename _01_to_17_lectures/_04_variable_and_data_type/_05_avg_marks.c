#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    double avg;
    // Taking user input
    printf("Enter sub1 marks : ");
    scanf("%d", &sub1);

    printf("Enter sub2 marks : ");
    scanf("%d", &sub2);

    printf("Enter sub3 marks : ");
    scanf("%d", &sub3);

    // print the avg
    avg = (sub1 + sub2 + sub3) / (double)3;
    printf("\nAverage : %.2lf\n\n", avg);

    // exit
    return 0;
}