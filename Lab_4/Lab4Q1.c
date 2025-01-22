/*
    Program Description: A program asking the user to enter a character from standard-input and displays a message whether the character is a vowel or not.

    Author: Amanda Ajredini

    Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    char char_1 = ' ';


    // Ask user to enter any charachter
    printf("Enter any character: \n");
    scanf("%c", &char_1);

    // Ignore the enter key as the next character
    while(getchar() != '\n');

    // Use switch case to use multiple conditions efficiently
    switch (char_1)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        {
            printf("You have entered a vowel character.");

            break;

        } // end case

        // This will check that the charcter entered is not a vowel
        default:
        {

            printf("You have entered a character that is not a vowel.");

            break;

        } // end default

    } // end switch

    return 0;

} // end main