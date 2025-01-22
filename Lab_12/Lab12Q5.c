/*
Program Description: A program to demonstrate the use of Pass by Value with a function

Author: Amanda Ajredini

Date: 06/02/2024
*/

#include <stdio.h>

void increment(int);

int main()
{
    int var1 = 1;

    printf("Var1 contains %d\n\n", var1);

    increment(var1);

    printf("Var1 contains %d\n\n", var1);

    return 0;

}// End main()

void increment(int var2)
{
    var2 = var2 + 2;

    printf("Var1 now contains %d\n\n", var2);

}// End increment()