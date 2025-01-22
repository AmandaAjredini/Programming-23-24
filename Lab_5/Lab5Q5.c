/*
    Program Description: A program that uses a loop to display all the even numbers from 1 - 100, separated by commas.

    Author: Amanda Ajredini

    Date: 24/10/2023
*/

#include <stdio.h>

int main()
{
    int i;


    //use for loop to count all even numbers 1-100
    for (i = 1; i < 101; i++)
    {   
        //use if statements to display the numbers with a comma EXCEPT the last number
        if (i%2==0 && i<100)
        {
            printf("%d,", i);
        }//end if
        else if (i==100)
        {
            printf("%d", i);
        }//end else if
    }//end for  
    return 0;
}//end main