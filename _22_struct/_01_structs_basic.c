/*How to use structs*/

#include <stdio.h>

// Always create struct outside the function
struct points
{
    int x;
    int y;
};

int main()
{
    printf("We are going to access struct now\n\n");
    struct points point; // A copy of struct(named : points) -> now referred as point for the function

    printf("Enter x coordinates : ");
    scanf("%d",&point.x);

    printf("Enter y coordinates : ");
    scanf("%d",&point.y);
    
    printf("Given coordinates x : %d, y : %d\n\n",point.x, point.y);
}