#include "stdio.h"

// sum of AP = n/2*(a1 + nth)

int main(){
    long long int a1 , n, nth, d;
    // user input a1
    printf("\nFirst term of sequence(a1) : ");
    scanf("%lld",&a1);

    // user input n
    printf("No. terms in the sequence(n) : ");
    scanf("%lld",&n);

    // user input d;
    printf("Difference between two no.(d) : ");
    scanf("%lld",&d);
    
    // calculation the nth term of the AP
    nth = a1 + (n-1)*d ;

    // print the result
    printf("\n-----------------Given info about the AP--------------\n");
    printf("\na1 = %lld",a1);
    printf("\nTotal terms(n)= %lld",n);
    printf("\nDiffernce(d)= %lld",d);
    // printf("\nFormula Used nth = a1 + (n-1)*d\n");
    printf("\nnth term : %lld", nth);

    // sum of the all AP terms
    long long int sum;
    sum = n/2*(a1+nth);
    printf("\n\nSum of AP terms : %lld",sum);


    // exit 
    return 0;
}