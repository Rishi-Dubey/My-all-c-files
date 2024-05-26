// will receive x1,y1 and x2,y2 from user and give distance between them

#include "stdio.h"
#include "math.h"

int main()
{
    double x1, y1, x2, y2, distance;

    // User input
    printf("Enter x1 : ");
    scanf("%lf", &x1);

    printf("Enter y1 : ");
    scanf("%lf", &y1);

    printf("Enter x2 : ");
    scanf("%lf", &x2);

    printf("Enter y2 : ");
    scanf("%lf", &y2);

    distance = sqrt((x1 - x2)*(x1 - x2) +  (y1 - y2)*(y1 - y2));
    // distance = sqrt(pow((x1 - y1),2) + pow((y1 - y2),2));

    // output 
    printf("\nDistance : %.2lf\n\n", distance);



    // exit
    return 0;
}
