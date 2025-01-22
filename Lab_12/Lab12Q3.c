/*
Program Description: A program that uses a function to check for the highest value of 3 numbers

Author: Amanda Ajredini

Date: 06/02/2024
*/

// Header Files
#include <stdio.h>

// Function Signatures
int highestNum(int, int, int);

int main()
{
    int num1, num2, num3;
    int highest = 0;


    // Ask user to enter 3 numbers and store them in respective variables
    printf("Enter 3 integer numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    highest = highestNum(num1, num2, num3);

    printf("The highest number is %d", highest);

    return 0;

}// End main()

// Function to check which number is the highest
int highestNum(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
    {
        return n1;
    }// End if
    else if (n2 > n1 && n2 > n3)
    {
        return n2;
    }// End else if
    else
    {
        return n3;
    }// End else
     
}// End highestNum()