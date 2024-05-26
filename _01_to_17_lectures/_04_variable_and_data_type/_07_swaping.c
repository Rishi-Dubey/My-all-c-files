#include <stdio.h>

int main()
{
    int num1 , num2;
    num1 = 10;
    num2 = 20;

    printf("Values of a and b before swaping\n");
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n\n",num2);

    // values after swaping

    int temp_holder;
    temp_holder = num1;
    num1 = num2;
    num2 = temp_holder;
    printf("Values after swaping\n");
        printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);







}