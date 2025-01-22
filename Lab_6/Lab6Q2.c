/*
    Program Description: A program using an array that will allow the user to input 3 temperature readings in Fahrenheit. After all the temperatures have been read from the keyboard, displays each of these temperatures on the screen and its corresponding temperature in Celsius

    Author: Amanda Ajredini

    Date: 07/11/2023
*/

#include <stdio.h>
#define SIZE 3

int main ()
{
    float temp[SIZE];
    int i;


    printf("Enter %d temperatures in Fahrenheit:\n", SIZE);

    //use for loop to ask the user to enter 3 temps to put them into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &temp[i]);
    }//end for

    printf("\nThe Fahrenheit temperatures you entered are: \n\n");

    //use for loop to print the contents of the array using the temps entered in
    for(i = 0; i < SIZE; i++)
    {
        printf("%.1f ", temp[i]);
    }//end for

    printf("\nThe temperatures you entered converted to Celsius are: \n\n");

    //use for loop to display contents of array after we've made the changes to the elements
    for(i = 0; i < SIZE; i++)
    {
        temp[i] = ( temp[i] - 32.0)*(5.0/9.0);
        printf("%.1f ", temp[i]);
    }//end for

    return 0;
}//end main