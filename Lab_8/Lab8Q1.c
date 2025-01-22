/*
    Program Description: A program working with two 2-Dimensional arrays and storing the product of 2 elements when multiplied into a third array.

    Author: Amanda Ajredini

    Date: 21/11/2023
*/

#include <stdio.h>
#define ROW 3
#define COL 4

int main ()
{
    int a1[ROW][COL];
    int a2[ROW][COL];
    int a3[ROW][COL];
    int i, j;

    //ask user to enter 12 numbers for first array
    printf("Enter %d numbers: \n", ROW*COL);


    //use for loop to get user to input 12 numbers
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf(" %d", &a1[i][j]);
        }//end inner for
    }//end outer for
    
    
    //ask user to enter 12 numbers for second array
    printf("\nEnter %d more numbers: \n", ROW*COL);


    //use for loop to get user to input another 12 numbers
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf(" %d", &a2[i][j]);
        }//end inner for
    }//end outer for


    //use for loop to multiply the corresponding elements in both arrays and save the product in third array
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            a3[i][j] = a1[i][j]*a2[i][j];
        }//end inner for
    }//end outer for


    //use for loop to print the contents of third array
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\nThe elements of a3[%d][%d] are %d \n", i, j, a3[i][j]);
        }//end inner for
    }//end outer for

    return 0;
}//end main