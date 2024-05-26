#include <stdio.h>

// in c for single character string or literal like 'a' or '-' we should use ' ' single quotes.
// in c for multiple characters string we use "Ram" or "Ram is good " double string "".

int main(){
    double celcius,farnahite;
    // taking user input
    printf("Enter Celcius : ");
    scanf("%lf", &celcius);

    farnahite = celcius*9/5+32;
    // displaying the result
    printf("\n%.2lf celcius into farnahite : %.2lf \n\n",celcius,farnahite);

    // exit
    return 0;


}