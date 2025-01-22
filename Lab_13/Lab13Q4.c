/*
Program Description: A program passing a 1-D array to multiply each element by 2 and display it

Author: Amanda Ajredini

Date: 13/02/2024
*/

//Header Files
#include <stdio.h>

//Symbolic Names
#define SIZE 5

//Function Signatures
void multiplyBy2(int *);

int main()
{
    int i;
    int array[SIZE];

    // Ask user to enter 5 numbers 
    printf("Enter %d numbers: \n", SIZE);

    // Use for loop to capture each entry from user into the array
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", & *(array + i));
    }

    multiplyBy2(array);

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", *(array + i));
    }

    return 0;

}// End main()

void multiplyBy2(int *arr)
{
    int i;
    int highest = 0;

    for (i = 0; i < SIZE; i++)
    {
        *(arr + i) = *(arr + i) * 2;
        
    }// End for
    
}// End highestNum()

