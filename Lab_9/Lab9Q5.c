/*
    Program Description: A program working with two arrays in pointer notation.

    Author: Amanda Ajredini

    Date: 05/12/2023
*/

#include <stdio.h>

#define SIZE 3

int main ()
{
    float a1[SIZE];
    float a2[SIZE];
    int i;


    //ask user to enter in 3 floating point numbers
    printf("\nEnter %d decimal point numbers:\n", SIZE);


    //enter values into the first array using pointer notation
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &*(a1 + i));
    }//end for
    

    //copy the values from the first array into the second array using pointer notation
    for(i = 0; i < SIZE; i++)
    {
        *(a2 + i) = *(a1 + i);
    }//end for


    //display the contents of first array using pointer notation
    for (i = 0; i < SIZE; i++)
    {
        printf("\nYou entered %.1f\n\n", *(a1 + i));
    }//end for 


    //display the contents of second array using pointer notation
    for (i = 0; i < SIZE; i++)
    {
        printf("\nThe second array contains %.1f\n\n", *(a2 + i));
    }//end for
    
    return 0;

}//end main
