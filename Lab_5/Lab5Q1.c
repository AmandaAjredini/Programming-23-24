/*
    Program Description: A program to demonstrate a while loop by displaying the numbers 1-10 in descending order.

    Author: Amanda Ajredini

    Date: 24/10/2023
*/

#include <stdio.h>

int main()
{
    int num = 11;


    while (num > 1)
    {
        num = num - 1;

        if(num<2)
        {
            printf("%d", num);
        }
        else
        {
            printf("%d,", num);
        }
    }//end while

    return 0;
}//end main