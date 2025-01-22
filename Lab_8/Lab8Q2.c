/*
    Program Description: A program calculating the sum of all elements in an array

    Author: Amanda Ajredini

    Date: 21/11/2023
*/

#include <stdio.h>
#define ROW 4
#define COL 6

int main ()
{
    int data[ROW][COL] = { {3, 2, 5, 7, 4, 2},
                           {1, 4, 4, 8, 13, 1},
                           {9, 1, 0, 2, 0, 0},
                           {0, 2, 6, 3, -1, -8} 
                         };
    int i, j;
    int sum = 0;


    //use for loop to keep a running total of the elements in the array
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
            {
                sum = data[i][j] + sum;
            }//end inner for
    }//end outer for
    
    
    // display the sum using print statement
    printf("\nSum of all elements in array is %d\n", sum);
    
    return 0;
}//end main

