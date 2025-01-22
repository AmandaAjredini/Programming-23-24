/*
    Program Description: A program asking the user to enter 2 characters and displaying them on separate lines.

    Author: Amanda Ajredini

    Date: 10/10/2023
*/

#include <stdio.h>

int main()
{
    char char_1 = ' ';
    char char_2 = ' ';

    // Ask user to enter any character
    printf("Enter any character: \n");
    char_1 = getchar();

    // Ignore the enter key as the next character
    while(getchar() != '\n');

    // Ask user to enter another charater
    printf("Enter another character: \n");
    char_2 = getchar();

    printf("You entered: %c%c", char_1, char_2);

    return 0;
}