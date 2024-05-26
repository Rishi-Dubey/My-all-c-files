/*Program will take as many subject marks and will print their avg*/

#include <stdio.h>

int main()
{
    float num, sum = 0;
    int num_of_subjects;
    int count = 1; // to count the subject number

    // asking for the number of subjects 
    printf("Enter number of subjects : ");
    scanf("%d",&num_of_subjects);

    // running loops to get input and sum
    while (count <= num_of_subjects)
    {
        printf("Enter marks of subject %d : ",count);
        scanf("%f",&num);

        if ((int)num == -1)
        {
            printf("Exiting the program\n\n");
            break; // break the loop
        }

        sum += num; // get the sum of numbers
        count += 1; 

    }

    if (sum != 0)
    {
        float avg = sum/num_of_subjects;
        printf("Avg of %d numbers : %.1f\n\n",num_of_subjects, avg);
    }
}