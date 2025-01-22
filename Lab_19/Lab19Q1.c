/*

Program Description: A program that compares two text files and displays any differences between the files

Author: Amanda Ajredini

Date: 16/04/2024

*/

// Header Files
#include <stdio.h>
#include <string.h>

// Symbolic Names
#define SIZE 61


int main() 
{
    FILE *fp1, *fp2;
    char file1[SIZE], file2[SIZE];
    int difference = 1;

    // Open both files
    fp1 = fopen("Hi.txt", "r");
    fp2 = fopen("Hello.txt", "r");

    // If the address is NULL, error opening files
    if (fp1 == NULL || fp2 == NULL) 
    {
        printf("\nError opening Hi.txt and/or Hello.txt\n");
        return 1; // End program

    }// End if
    else // File opening successful
    {
        printf("\nHi.txt opened successfully\n");
        printf("\nHello.txt opened successfully\n");


        while (fgets(file1, SIZE, fp1) != NULL && fgets(file2, SIZE, fp2) != NULL)
        {
            if (strcmp(file1, file2) != 0) // compares each line in both files and checks if they are the same or different 
            {
                printf("\nDifference found here:\n");
                printf("Hi.txt : %s\n", file1);
                printf("Hello.txt : %s\n", file2);

            }// End inner if

            difference++;

        }// End while

    }// End else

    // Close both files after working with them
    fclose(fp1);
    fclose(fp2);

    return 0;

}// End main()