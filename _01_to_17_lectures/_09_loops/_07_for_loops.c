// for loops similar to that of python

#include <stdio.h>
// Hi i amm goodfvgds
int main()
{
    int num;
    printf("\nEnter range to int : ");
    scanf("%d",&num);
    // here i is iterator just like ("for i in range(10) in python")

    for (int i = 1; i <= num; i += 1)
    { // here i += 1 will execute after one iteration of the loop not in beginning
        printf("%d\n",i);
    }

    // exit
    return 0;
    
}