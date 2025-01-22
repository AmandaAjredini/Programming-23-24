/*
    Program Description: A program to find the sum of all odd integers between 1-99.

    Author: Amanda Ajredini

    Date: 24/10/2023
*/

#include <stdio.h>

int main()
{
    int i;
    int sum = 0;

    //use for loop to count all numbers 1-99
    for (i = 1; i < 100; i++)
    {   
        //use if statement to make sure only ODD numbers are counted 
        if (i % 2 != 0)
        {   
            sum = sum + i;
        }//end if
        
    }//end for
    
    //print the sum of all odd integers
    printf("The sum of all odd integers between 1-99 is : %d", sum);
    
    return 0;
}//end main