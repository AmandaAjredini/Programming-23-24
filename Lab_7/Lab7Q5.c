/*
    Program Description: A program inputting values into a 4 by 5 array, search array for values < 0 and display them along with their row and col indices.

    Author: Amanda Ajredini

    Date: 14/11/2023
*/

#include <stdio.h>
#define ROW 4
#define COL 5

int main ()
{
    int arr[ROW][COL];
    int i, j;

    //ask user to enter to input numbers the size of the array
    printf("Enter %d numbers:\n\n", ROW*COL);

    //use for loop to input numbers entered into array
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &arr[i][j]);
        }//end inner for
        
    }//end outer for

    //use for loop to search array for numbers < 0 and display them with ROW and COL indices
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (arr[i][j] < 0)
            {
                printf("\nROW %d, COL %d contains %d, which is less than 0\n\n", i, j, arr[i][j]);
            }//end if
            
        }//end inner for
        
    }//end outer for
    
    return 0;

}//end main