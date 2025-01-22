/*
  Program Description: A program inputting three floating-point numbers from the keyboard and calculating their sum and average.
  
  Author: Amanda Ajredini

  Date: 10/10/2023
*/

#include <stdio.h>

int main()
{
    float var1 = 0;
    float var2 = 0;
    float var3 = 0;
    float sum = 0;
    float average = 0;


    //Get user to enter first number.
    printf("Please enter the first number:\n");
    scanf("%f", &var1);

    //Get user to enter second number.
    printf("Please enter the second number:\n");
    scanf("%f", &var2);

    //Get user to enter third number.
    printf("Please enter the third number:\n");
    scanf("%f", &var3);

    //Get the sum of three numbers by adding them.
    sum = var1 + var2 + var3;
    printf("The sum is %.3f\n", sum);

    //Get average of three numbers by adding all of them and diving by 3.
    average = sum/3;
    printf("The average is %.3f\n", average);

    return 0;  
}
