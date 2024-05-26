// Here I will print correct of 0<= marks <=100 and incorrect for others

#include <stdio.h>

int main()
{
    float marks;

    // using do while loop to run atleast once
    do
    {
        printf("\nEnter marks : ");
        scanf("%f", &marks);
        
    } while (marks < 0 || marks > 100); // will run until user not enter a valid
    // number. if user enters a valid number below one will print and loop will break

    printf("Marks : '%.1f' is Valid\n", marks);

    // exit
    return 0;
}