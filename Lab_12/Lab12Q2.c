/*
Program Description: A program that uses a function to calculate the average of 3 numbers

Author: Amanda Ajredini

Date: 06/02/2024
*/

// Header files
#include <stdio.h>

// Function Signatures
float average(int, int, int);

int main()
{
    int num1, num2, num3;
    float avg;

    // Ask user to enter 3 numbers
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Put the value returned by function into avg
    avg = average(num1, num2, num3);

    printf("\nThe average is %.1f\n", avg);

    return 0;

}// End main()

// Function to return average of 3 numbers entered by user
float average(int n1, int n2, int n3)
{
    float avg1 = (n1 + n2 + n3) / 3.0;

    return avg1;

}// End average()