/*

Program Description: A program working with character arrays and strings

Author: Amanda Ajredini

Date: 20/02/2024

*/

#include <stdio.h>

#define SIZE 7

int main()
{
    char word[SIZE] = {'B', 'a', 'n', 'a', 'n', 'a', '\0'};
    // char word[SIZE] = "Banana"; - using string literals
    // char *ptr = "Banana"; - using pointers
    int i;


    // use for loop to print the string and if statement to print \0
    for (i = 0; i < SIZE; i++)
    {
        printf("%c", word[i]);

        if (word[i] == '\0')
        {
            printf("\0");
        }// End if
        
    }// End for

    return 0;

}// End main