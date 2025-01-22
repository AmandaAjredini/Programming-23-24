/*
Program Description: A program passing a 1-D array to find the highest number

Author: Amanda Ajredini

Date: 13/02/2024
*/

//Header Files
#include <stdio.h>

//Symbolic Names
#define SIZE 5

//Function Signatures
int highestNum(int *);

int main()
{
    int i;
    int highest = 0;
    int array[SIZE];

    // Ask user to enter 5 numbers 
    printf("Enter %d numbers: \n", SIZE);

    // Use for loop to capture each entry from user into the array
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", & *(array + i));
    }

    highest = highestNum(array);

    printf("\nHighest number is %d", highest);

    return 0;

}// End main()

int highestNum(int *arr)
{
    int i;
    int highest = 0;

    for (i = 0; i < SIZE; i++)
    {
        if (*(arr + i) > *(arr + i + 1))
        {
            highest = *(arr + i);
            return highest;
        }// End if
        
    }// End for
    
}// End highestNum()

