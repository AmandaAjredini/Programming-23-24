/*
    Program Description: A program that defines an integer array with 5 elements and copies the elements into another array.

    Author: Amanda Ajredini

    Date: 07/11/2023
*/

#include <stdio.h>
#define SIZE 5

int main()
{
    int array1[SIZE];
    int array2[SIZE];
    int i;


    printf("Enter %d integers:\n", SIZE);

    //use for loop to ask the user to enter in 5 integers and put them into the first array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }//end for

    printf("\nThe contents of the first array are: \n\n");

    //use for loop to print the contents of the first array using the numbers entered in
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array1[i]);
    }//end for

    for (i = 0; i < SIZE; i++)
    {
        array2[i] = array1[i];
    }//end for

    printf("\n\nThe contents of the second array are: \n\n");

    //use for loop to display the contents of the second array
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array2[i]);
    }//end for

    return 0;
}//end main