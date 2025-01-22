/*
    Program Description: A program displaying an array of size 15, displaying each number on a separate line, on one line each number separted by a single space, as in (b) but in reverse order 

    Author: Amanda Ajredini

    Date: 14/11/2023
*/

#include <stdio.h>
#define SIZE 15

int main ()
{
    int array[SIZE];
    int i, j;

    
    printf("Enter %d numbers:\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }//end for

    printf("\nNumbers on separate line: \n");

    for(i = 0; i < SIZE; i++)
    {
        printf("\n%d", array[i]);
    }//end for

    printf("\n\nNumbers on same line: \n");

    for(i = 0; i < SIZE; i++)
    {
        printf(" %d", array[i]);
    }//end for

    printf("\n\nNumbers in reverse: \n");

    for(j = SIZE - 1; j >= 0; j--)
    {   
        printf("\n%d", array[j]);
    }//end for

    return 0;
}//end main
