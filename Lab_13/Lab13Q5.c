/*
Program Description: A program passing a 1-D array dealing with even and odd numbers

Author: Amanda Ajredini

Date: 13/02/2024
*/

//Header Files
#include <stdio.h>

//Symbolic Names
#define SIZE 5

//Function Signatures
int evenNumbers(int *);

int main()
{
    int values[SIZE];
    int i;
    int even = 0;


    // Ask user to enter 5 numbers
    printf("Enter %d numbers: \n", SIZE);
    
    // Use for loop so that each entry is recorded in each element of the array
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", & *(values + i));
    }

    even = evenNumbers(values);

    printf("\nThere are %d even numbers\n", even);
    
    return 0;

}// End main()

// Function to display if each number is odd or even and counting the amount of even numbers
int evenNumbers(int *arr)
{
    int i;
    int evenCount = 0;

    // Use for loop to pass through array
    for (i = 0; i < SIZE; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            printf("\n%d is even\n", *(arr + i));
            evenCount++;
        }// End if
        else
        {
            printf("\n%d is odd\n", *(arr + i));
        }// End else
        
    }// End for
    
    return evenCount;
    
}// End evenNumbers()