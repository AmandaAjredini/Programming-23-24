/*
    Program Description: A program working with dynamic memory allocation (DMA)

    Author: Amanda Ajredini

    Date: 12/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main ()
{
    float *ptr;
    int i;
    float avg;
    float sum;


    // Part 1 - ask user to enter 5 floating-point numbers
    printf("\nEnter %d floating-point numbers\n", SIZE);

    // Part 2 - allocate the block of memory required
    ptr = calloc(SIZE, sizeof(float));

    // Part 3 - check if calloc was successful in allocating the block of memory
    if (ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");

        return 0;

    }// end if
    else 
    {
        // Part 4 - memory allocated successfully
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", SIZE);

        // enter the data items into the allocated memory block
        for (i = 0; i < SIZE; i++)
        {
            scanf("%f", &*(ptr + i));
        }// end for

        // calculate sum of data items entered
        for (i = 0; i < SIZE; i++)
        {
            sum = sum + *(ptr + i);
        }

        // calculate average of data items entered
        avg = sum / SIZE;

        printf("\nThe average of the data items you entered is %.1f", avg);

        // Part 5 - free the allocated memory block once finished using it
        free(ptr);
        
    }// end else

    return 0;
    
}// end main