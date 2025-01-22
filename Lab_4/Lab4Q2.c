/*
    Program Description: A program asking the user to enter an integer between 1 and 100 and displays a message whether the integer is an even or odd integer.

    Author: Amanda Ajredini

    Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int num = 0;

    // Ask user to input an integer between 1-100
    printf("Enter an integer between 1-100. \n");
    scanf("%d", &num);

    // Use if/else statements to display a message whether the integer is even or odd
    if (num%2 == 0)
    {
        printf("The number you have entered is even.");
    } // end if

    else
    {
        printf("The number you have entered is odd.");
    } // end else

    return 0;
} // end main