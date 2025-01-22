/*
    Program Description: A program that will allow the user to enter 4 numbers into this array and Swap the 1st and 2nd numbers in the array and swap the 3rd and 4th numbers in the array.

    Author: Amanda Ajredini

    Date: 07/11/2023
*/

#include <stdio.h>
#define SIZE 4

int main ()
{
    int array[SIZE];
    int i;
    int t;


    printf("Enter %d integers:\n", SIZE);

    //use for loop to ask the user to enter in 4 integers and put them into the first array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }//end for

    printf("\nThe contents of the array are: \n\n");

    //use for loop to print the contents of the array using the numbers entered in
    for(i = 0; i < SIZE; i++)
    {
        printf("%d", array[i]);
    }//end for

    //use for loop to swap the 1st/2nd numbers and 3rd/4th numbers
    for(i = 0; i < SIZE; i+=2)
    {
        t = array[i];
        array[i] = array [i + 1];
        array[i + 1] = t;
    }//end for

    printf("\nThe contents of the array now are: \n\n");

    //use for loop to print the contents of the array after the modifications
    for(i = 0; i < SIZE; i++)
    {
        printf("%d", array[i]);
    }//end for

    return 0;
}//end main