/*
    Program Description: A program asking the user to enter 3 numbers and displaying them on separate lines.

    Author: Amanda Ajredini

    Date: 10/10/2023
*/

#include <stdio.h>

int main()
{
    float var1 = 0;
    float var2 = 0;
    float var3 = 0;


    //Get user to enter first number.
    printf("Please enter the first number:\n");
    scanf("%f", &var1);

    //Get user to enter second number.
    printf("Please enter the second number:\n");
    scanf("%f", &var2);

    //Get user to enter third number.
    printf("Please enter the third number:\n");
    scanf("%f", &var3);

    return 0;
}