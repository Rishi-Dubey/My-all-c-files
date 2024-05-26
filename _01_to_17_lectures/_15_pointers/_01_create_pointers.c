#include <stdio.h>

// format for print address is %p not %d as address is stored in hexa values
// always *pointer_of_a is same as a;(can use both in any same scope place)
// only different when we pass to function as inside function their scope change
// if we pass a inside the function it will not change but if we pass pointer_of_a value
// of a will change


void main()
{
    // Creating the pointer for a
    int a = 10;
    int *pointer_of_a; // have no address to point to
    // special symbol (*) use to store pointers a standard to store address 

    pointer_of_a = &a; // storing a's address

    printf("\nAddress of a : %p \n", &a);
    printf("Address of a using pointer : %p",pointer_of_a);


    // Access value of a without using a name but with pointer
    printf("\nValue of a : %d\n",*pointer_of_a);

}
