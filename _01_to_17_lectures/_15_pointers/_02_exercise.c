#include <stdio.h>

int main()
{
    int grade1, grade2;
    printf("Enter grade1,grade2 : ");
    scanf("%d,%d",&grade1,&grade2);

    // pointer for grade1 and grade2
    int *p_grade1 = &grade1;
    int *p_grade2 = &grade2;

    printf("\nAddress of grade1 : %p\n", p_grade1);
    printf("Address of grade2 : %p\n", p_grade2);

    printf("Value of grade1 : %d \n",*p_grade1);
    printf("Value of grade2 : %d",*p_grade2);


   // exit code
   return 0; // if execute successfully 
}