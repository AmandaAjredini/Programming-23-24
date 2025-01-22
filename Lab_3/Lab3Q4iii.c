/*
  Program Description: A program inputting a temperature in degrees Fahrenheit and converting it to degrees Celsius.
  
  Author: Amanda Ajredini

  Date: 10/10/2023
*/

#include <stdio.h>

int main()
{
    float degreesF = 0;
    float degreesC = 0;

    // Ask user to enter a temperature in degrees Fahrenheit
    printf("Enter a temperature in degrees fahrenheit: \n");
    scanf("%f", &degreesF);

    // Convert Fahrenheit into Celsius using the formula below
    degreesC = (degreesF - 32.0)*(5.0/9.0);

    printf("The temperature converted to celsius is %.2f", degreesC);

    return 0;
}