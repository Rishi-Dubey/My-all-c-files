#include <stdio.h>

int main()
{
    // Creating a constant value -> like DOB -> 2005
    int const dob = 2005;

    // dob = 2006;  // so changing is not allowed get (error(red) underline)
    printf("My DOB : %d", dob);

    // creating a pointer for the const value
    // Here pointer itself is not constant but value only
    // int *p_dob is invalid here
    const int *p_dob = &dob;

    printf("\nPointer value : %d", *p_dob);

    // creating a const pointer for this
    // Here pointer is constant not the value.

    int current_year = 2024;
    int age = 12;
    int *const p_cy = &current_year;

    // can change the value where pointer is pointing
    *p_cy = 2023;

    // But cant change the destination where pointer is pointing
    // p_cy = age; // Invalid or not allowed as pointer is constant;

    // Creating a constant value and const pointer combined
    int value = 20;

    const int *const p_value = &value;

    // if successful exit
    return 0;
}