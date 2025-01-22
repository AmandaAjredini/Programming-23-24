/*
    Program Description: A program where the user enters an integer between 1-5 and display all the numbers between 1-20 that are evenly divisible by this number.

    Author: Amanda Ajredini

    Date: 24/10/2023
*/

#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;


        //ask user to enter a number between 1-5
        printf("Enter a number between 1-5\n");
        scanf("%d", &num);

        //use if and for loop to display all the numbers between 1-20 that are divisble by the number entered
        if (num < 6)
        {
            for(i=0;i<21;i++)
            {
                if (i%num==0)
                {
                printf("%d ", i);
                }//end if
            }//end for
        }//end if
    return 0;
}//end main
