/*
    Program Description: A program that counts from one to ten, prints the values on a separate line for each, and prints a message stating, "This number is three" and "This number is seven" when the count is 3 and when the count is 7 respectively.

    Author: Amanda Ajredini

    Date: 24/10/2023
*/

#include <stdio.h>

int main()
{
    int i;


    //use for loop to count numbers 1-10
    for (i = 1; i < 11; i++)
    {
        printf("%d\n", i);

        //use if statement to print number is three when = 3 annd number is 7 when = 7
        if(i==3)
        {
            printf("This number is three.\n");
        }//end if
        else if(i==7)
        {
            printf("This number is seven.\n");
        }//end else if

    }//end for
    return 0;
}//end main