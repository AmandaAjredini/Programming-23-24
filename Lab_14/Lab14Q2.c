/*

Program Description: A program to read in your name and display it with a space between each letter. (strings)

Author : Amanda Ajredini

Date: 20/02/2024

*/

#include <stdio.h>

#define SIZE 10

int main()
{
    char name[SIZE];
    int i = 0;

    // Ask user to enter their first name
    printf("Enter your first name:\n");

    // Use fgets() to scan in the characters entered into the array
    fgets(name, SIZE - 1, stdin);

    // use for loop to print out each letter of array with a space after it
    for (i = 0; i < SIZE; i++)
    {
        putchar(name[i]);
        putchar(' ');
        
    }// End for

    return 0;

}// End main