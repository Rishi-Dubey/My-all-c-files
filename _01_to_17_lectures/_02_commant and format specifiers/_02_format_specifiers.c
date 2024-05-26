// Here I will use the format specifiers equivalent of f-string of the python

#include "stdio.h"

// %s for string value
// %d for digit value
// &f for float value

int main(){
    printf("Hi I am using the %s specifiers\n","Format");
    printf("and here i am using %d specifiers\n",10);
    printf("and here i am using %f specifiers\n",10.00);
    printf("I am currently %d years old and next year I will be %d",18,19);
    return 0;
}