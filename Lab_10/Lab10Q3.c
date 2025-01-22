/*
    Program Description: A program working with dynamic memory allocation (DMA). Two blocks of memory at same time.

    Author: Amanda Ajredini

    Date: 12/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define SIZE2 1

int main ()
{
    float *ptr1;
    float *ptr2;
    int i;
    float avg;
    float sum;


    // Part 1 - ask user to enter 5 floating-point numbers
    printf("\nEnter %d floating-point numbers\n", SIZE);

    // Part 2 - allocate the block of memory required for both pointers
    ptr1 = calloc(SIZE, sizeof(float));
    ptr2 = calloc(SIZE2, sizeof(float));

    // Part 3 - check if calloc was successful in allocating the block of memory for both ptr1 and ptr2
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("\nFailed to allocate memory\n");

        return 0;

    }// end if
    else 
    {
        // Part 4 - memory allocated successfully
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", SIZE);

        // enter the data items into the allocated memory block ptr1
        for (i = 0; i < SIZE; i++)
        {
            scanf("%f", &*(ptr1 + i));
        }// end for

        // calculate sum of data items entered into ptr1
        for (i = 0; i < SIZE; i++)
        {
            sum = sum + *(ptr1 + i);
        }

        // calculate average of data items entered and store the average in ptr2
        avg = sum / SIZE;

        *ptr2 = avg;

        printf("\nThe average of the data items you entered is %.1f", *ptr2);

        // Part 5 - free the allocated memory blocks once finished using them
        free(ptr1);
        free(ptr2);
        
    }// end else
    

    return 0;
    
}// end main

