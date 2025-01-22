/*
    Program Description: A program where the user enters a positive integer value and demonstrating the use of loops.

    Author: Amanda Ajredini

    Date: 24/10/2023
*/

#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;


    //use while loop so that when the user enters a value less than 1 they gett an error message
    while (num < 2)
    {
        //ask the user to input a positive integer value greater than 1
        printf("Enter any positive number greater than 1.\n");
        scanf("%d", &num);
    }


    //if number entered is greater than one create a loop to carry out the following steps
    while (num > 1)
    {
        //if number is even divide by 2
        if (num % 2 == 0)
        {
            num = num / 2;
            printf("The next value is %d\n", num);
            
        }//end if
        else
        {//if number is not even(odd) multiply by 3 and add 1
            num = (num * 3) + 1;
            printf("The next value is %d\n", num);
            
        }//end else

        //Use a counter to display number of steps taken
        i = i + 1;
    }

    printf("Final Value is 1, number of steps is %d", i);

    return 0;
}//end main