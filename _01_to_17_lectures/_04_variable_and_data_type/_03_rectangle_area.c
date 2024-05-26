// Here I will take length and breath of rec from user and print its area

#include "stdio.h"

int main()
{
    printf("\n---------Program will print the area of rectangle------------\n");

    // Decleration
    float length, breadth;

    // using them
    printf("\nLength of rec: ");
    scanf("%f", &length);

    printf("Breath of rec: ");
    scanf("%f", &breadth);

    // print the area
    float area = length * breadth;
    float perimeter = 2*(length+breadth);
    printf("\nArea : %.2f ",area);
    printf("\nPerimeter : %.2f",perimeter);

    // Exit
    return 0;
}