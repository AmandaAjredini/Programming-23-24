/*
    Program Description: A program working with arrays and pointer notation

    Author: Amanda Ajredini

    Date: 12/12/2023
*/

#include <stdio.h>

int main ()
{
    float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4 };
    float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 };
    int mpl[5]; // miles per litre
    int i;

    for (i = 0; i < 5; i++)
    {
        *(mpl + i) = *(miles + i) / *(litres + i);
    }// end for

    printf("The mpl array contains: \n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(mpl + i));
    }// end for
    
    
}// end main