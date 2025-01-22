/*
    Program Description: A program asking the user to enter 2 integers and check if the first integer is evenly divisble by the second.

    Author: Amanda Ajredini

    Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    // Ask user to enter 2 integers
    printf("Enter two integers:  \n");
    scanf("%d%d", &num1, &num2);

    if(num1%num2 == 0)
    {
        printf("The first number you entered is evenly divisble by the second number.");

    } // end if

    else
    {
        printf("The first number you entered is not evenly divisble by the second number.");
    } // end else

    return 0;
} // end main