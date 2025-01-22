/*
    Program Description: A program working with a 2-Dimensional array

    Author: Amanda Ajredini

    Date: 21/11/2023
*/

#include <stdio.h>
#define ROW 3
#define COL 2

int main ()
{
    int array[ROW][COL] = {0};
    int i, j;
    int sumRow = 0;
    int sumCol = 0;
    int max = array[0][0]; //assume the first element is the largest in the array


    printf("Enter %d numbers: \n", ROW * COL);

    //use for loop to ask user to enter in numbers for the array
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &array[i][j]);
        }//end inner for
        
    }//end outer for

    //use for loop to calculate the sum of each row
    for (i = 0; i < ROW; i++)
    {
        sumRow = 0; // Reset sum for each row

        for (j = 0; j < COL; j++)
        {
            sumRow = sumRow + array[i][j];
        }//end inner for

        printf("\nSum of Row %d = %d\n", i, sumRow);

    }//end outer for

    for (j = 0; j < COL; j++) //for COL first so it reads in right amount of columns
    {
        sumCol = 0; // Reset sum for each column

        for (i = 0; i < ROW; i++)
        {
            sumCol = sumCol + array[i][j];
        }//end inner for

        printf("\n\nSum of Col %d = %d", j, sumCol);

    }//end outer for

    
    //use for loop to find the biggest number in the array
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }//end if
            
        }//end inner for
        
    }//end outer for

    //display the biggest number in the array
    printf("\n\nThe largest number in the array is %d", max);
    
    return 0;
    
}//end main