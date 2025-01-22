/*
    Program Description: A program using an 2-D Array, entering values, displaying values, calculating average, finding smallest & largest element.

    Author: Amanda Ajredini

    Date: 14/11/2023
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main ()
{
    int array[ROW][COL];
    int i , j;
    int highest = 0;
    int lowest = 0;
    int sum = 0;
    float avg = 0;


    //ask user to input numbers for the array
    printf("\nEnter %d numbers:\n", ROW * COL);

    //use for loop to keep a running total of the numbers inputted by uset
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            scanf("%d", &array[i][j]);

            sum = sum + array[i][j];
        }//end inner for
        
    }//end outer for


    //use for loop to display the contents of the array
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            printf("\nRow %d, Col %d contains %d", i, j, array[i][j]);
        }//end inner for
        
    }//end outer for


    //assume the highest number in the array is inside element [0][0]
    highest = array[0][0];

    //assume the lowest number in the array is inside element [0][0]
    lowest = array[0][0];

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {   //find the highest number in the array
            if(highest < array[i][j])
            {
                highest = array[i][j];
            } // end if
            // find the lowest number in the array
            if(lowest > array[i][j])
            {
                lowest = array[i][j];
            } // end if
        }//end inner for
    }//end outer for

    printf("\n\nThe highest number is %d", highest);
    printf("\n\nThe lowest number is %d", lowest);

    //find the average by dividing the sum of the elements by the no. of elements in array
    avg = (float)sum / (ROW * COL);

    printf("\n\nThe average is %.1f", avg);

    return 0;

}//end main