/*Important note
1) Pointer for int type or any single char type behaves different than the Array 
2) for int type we need to pass the Address(&using this
3) ex ->  (*int_num = &num) told explicitly the address)
4) To access the value we need to use (*int_num)-> value and to access tha address
we use (int_num) -> address 

5) for array we create like this int array[3] = {1, 2, 3}
6) pointer -> (int *pointer_array = array) not need to use (&array) as 
in c for (array pointer array points to its first element automatically 
so passing &array would be wrong 
7) same for accessing the value (pointer_array[i] is correct and *pointer_array is wrong))*/


#include <stdio.h>

void find_sum_diff(int num1, int num2, int *sum, int *diff)
{
    *sum = num1 + num2;  // changing the value with going to address
    *diff = num1 - num2; // same here means the value in this address will be (num1-num2)
}

int main()
{
    int a = 10, b = 12;
    int sum, difference;

    find_sum_diff(a, b, &sum, &difference);
    // above func change the value of sum and diffence by accessing their address 
    // and change the value their

    printf("\nSum : %d \n",sum);
    printf("Differnce : %d",difference);

    // exit code
    return 0; // if execute successfully
}
