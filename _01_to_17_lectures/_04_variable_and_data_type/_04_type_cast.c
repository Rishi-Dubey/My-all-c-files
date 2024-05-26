#include "stdio.h"
#include "stdlib.h"
// type cast of num1 is float(num1)
// double - format specifier is %lf
int main(){
    int num1 = 10 , num2 = 3;

    float result = (float)num1/num2 ; // num1 is convert to float
    // Here num1 is not permanently change it just for this line
    printf("division : %.2lf",result); // Ans would be 3 since all are int types
    
    // exit 
    return 0;


}