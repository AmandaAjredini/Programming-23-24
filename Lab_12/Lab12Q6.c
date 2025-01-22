/*
Program Description: A program to demonstrate the use of Pass by Reference with a function

Author: Amanda Ajredini

Date: 06/02/2024
*/

// Header files
#include <stdio.h>

// Function signatures
void increment(int *);

int main()
{
    int var1 = 1;

    printf("Var1 contains %d\n\n", var1);

    // Call function to increment var1 by 2
    increment(&var1);

    printf("Var1 contains %d\n\n", var1);

    return 0;

}// End main()

// Function to increment var 1 by 2
void increment(int *v1)
{
    *v1 += 2;

    printf("Var1 now contains %d\n\n", *v1);

}// End increment()