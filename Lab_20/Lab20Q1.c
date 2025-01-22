/*

Program Description: A program to display the lines of a text file along with the line numbers.

Author: Amanda Ajredini

Date: 23/04/2024

*/

#include <stdio.h> // Header Files 

int main ()
{
    FILE *fp;

    char fileName[100];
    char line[100];
    int lineNum = 1;

    // Ask user for the name of the file
    printf("Enter the name of the file you would like to open:\n");
    scanf("%s", fileName);

    fp  = fopen(fileName, "r"); // Open the file for reading mode

    if (fp == NULL) // Checks if file exists (if pointer is pointing to NULL or a memory address)
    {
        printf("Error opening the file.\n");
        return 1; // exit program with an error if file does not exist

    }// End if

    printf("\n");

    while (fgets(line, sizeof(line), fp)) // Read and display each line with line numbers
    {
        printf("%d. %s", lineNum, line);
        lineNum++;

    }// End while

    fclose(fp); // Close the file

    return 0;

}// End main ()

