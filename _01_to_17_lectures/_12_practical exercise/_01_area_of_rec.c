/*Program objective
1) Create function 
2) function receive len,breadth 
3) return Area of rectangle*/

#include <stdio.h>

float rec_area(float length, float width)
{
    return length * width;
}

int main()
{
    float length, width;
    printf("\nProgram will area of rectangle\n");

    printf("Enter length : ");
    scanf("%f",&length);

    printf("Enter width  : ");
    scanf("%f",&width);

    float area_of_rec = rec_area(length, width);

    printf("\nArea of %.2f u x %.2f u : %.2f u^2 \n\n",length, width, area_of_rec);

}