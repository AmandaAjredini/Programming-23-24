/*
Program Description: A program that uses a function to check if a number is even or odd.

Author: Amanda Ajredini

Date: 06/02/2024
*/

#include <stdio.h>

int evenOdd(int);

int main()
{
    int num;


    printf("Enter any number:\n");
    scanf("%d", &num);

    if(evenOdd(num))
    {
        printf("\n%d is even\n", num);
    }// End If
    else 
    {
        printf("\n%d is odd\n", num);
    }// End else

    return 0;

}// End main()

// Function to check if number entered is even
int evenOdd(int n1)
{
    if(n1 % 2 == 0)
    {
        return 1; // Return 1 if even
    }// End if
    else
    {
        return 0; // Return 0 if odd
    }// End else

}// End increment()