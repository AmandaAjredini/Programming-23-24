/*
    Program Description: A program inputting numbers into two one-dimensional arrays, and displaying the result of multiplying corresponding elements together

    Author: Amanda Ajredini

    Date: 14/11/2023
*/

#include <stdio.h>
#define SIZE 5

int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int i;
    int sum;

    //ask user to enter numbers for first array
    printf("Enter %d numbers:\n", SIZE);

    //use for loop to input numbers entered by user into first array
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr1[i]);
    }//end for

    //ask user to enter numbers for second array
    printf("Enter another %d numbers:\n", SIZE);

    //use for loop to input numbers entered by user into second array
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr2[i]);
    }//end for
    

    //use for loop to multiply corresponding elements of both arrays together and display them
    for (i = 0; i < SIZE; i++)
    {
        sum = arr1[i] * arr2[i];
        printf(" arr1[%d] * arr2[%d] =  %d\n\n", i, i, sum);
    }//end for

    return 0;

}//end main