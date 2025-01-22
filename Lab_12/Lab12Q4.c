/*
Program Description: A program that uses a function to determine the most commonly used character from 3 characters entered from user

Author: Amanda Ajredini

Date: 06/02/2024
*/

// Header files
#include <stdio.h>

// Function signature
char mostCommonChar(char, char, char);

int main()
{
    char char1, char2, char3;
    char mostCommon;
    

    // Ask user to enter 3 characters
    printf("Enter 3 characters: \n");

    scanf("%c %c %c", &char1, &char2, &char3);

    mostCommon = mostCommonChar(char1, char2, char3);

    printf("The most common character is: %c\n", mostCommon);

    return 0;
    
}// End main ()

// Function to find most common character
char mostCommonChar(char ch1, char ch2, char ch3)
{
    // Find the most common character
    if (ch1 == ch2) 
    {
        return ch1;
    }
    else if (ch2 == ch3) 
    {
        return ch2;
    }
    else if (ch3 == ch1)
    {
        return ch3;
    }// End if

}// End mostCommonChar()