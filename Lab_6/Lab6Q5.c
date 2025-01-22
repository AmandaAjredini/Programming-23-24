/*
    Program Description: A program that uses a char array with 5 elements.

    Author: Amanda Ajredini

    Date: 07/11/2023
*/

#include <stdio.h>
#define SIZE 5

int main ()
{
    char my_char[SIZE];
    int i;


    printf("Enter %d characters:\n", SIZE);

    
    //use for loop to ask the user to enter in 5 characters and put them into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf(" %c", &my_char[i]);
    }//end for

     printf("\nYou entered: \n\n");

    //use for loop to print the contents of the array using the characters entered in
    for(i = 0; i < SIZE; i++)
    {
        printf("%c ", my_char[i]);
    }//end for

    return 0;
}//end main