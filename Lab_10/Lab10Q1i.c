/*
    Program Description: A program working with arrays and pointer notation

    Author: Amanda Ajredini

    Date: 12/12/2023
*/

#include <stdio.h>


int main ()
{
    char chars[] = { 'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd' };
    int i;
    char ptr;


    for (i = 0; i < 8; i++)
    {
        if ( *(chars + i) == ' ')
        {
            *(chars + i) = '_';
        }// end if
        
    }// end for

    printf("The array now contains : ");
    for (i = 0; i < 8; i++)
    {
        printf("'%c'  ", *(chars + i));
        
    }// end for
    

    return 0;
    

}// end main