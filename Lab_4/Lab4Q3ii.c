/*
    Program Description: A program asking the user to input 3 numbers and determine if they form a valid triangle.

    Author: Amanda Ajredini

    Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    // Ask the user to enter 3 integers
    printf("Enter three integers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if((num1 + num2) > num3)
    {
        printf("The numbers you've entered form a triangle.");

    } // end if
    else
    {
        printf("The numbers you've entered do not form a triangle.");
    } // end else

    return 0;
} // end main