// Here I will print the order of the given 3 digit no if it is ascending or not
// 123 -> Ascending order

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Check if the no. is in ascending order or not\n\n");
    int num, place1, place2, place3;

    printf("Enter 3 digit no. : ");
    scanf("%d", &num);

    place1 = num / 100;
    place3 = num % 10;
    place2 = (num / 10) % 10;

    // checking order
    if (place1 < place2 && place2 < place3)
        printf("%d : Ascending order", num);

    else if (place1 > place2 && place2 > place3)
        printf("%d : Decending order ", num);
    
    else
        printf("Invalid Input!!!");

    return 0;
}