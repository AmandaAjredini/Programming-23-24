/*
Program Description: A program passing a 1-D array to find the average of 5 numbers

Author: Amanda Ajredini

Date: 13/02/2024
*/

//Header Files
#include <stdio.h>

//Symbolic Names
#define SIZE 5

//Function Signatures
float average(int *);

int main()
{
    int i;
    float avg = 0;
    int array[SIZE];

    // Ask user to enter 5 numbers 
    printf("Enter %d numbers: \n", SIZE);

    // Use for loop to capture each entry from user into the array
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", & *(array + i));
    }

    avg = average(array);

    printf("\nAverage is %.1f", avg);

    return 0;

}// End main()

float average(int *arr)
{
    int i;
    int avg, sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        sum = sum + *(arr + i);
    }// End for

    avg = sum / SIZE;
    
    return avg;
    
}// End highestNum()

