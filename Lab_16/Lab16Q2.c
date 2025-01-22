/*

Program Description: String comparisons and determining the frequency of a word from inputted string

Author: Amanda Ajredini

Date: 05/03/2024

*/

//Header files
#include <stdio.h>
#include <string.h>


#define SIZE 100

//Function Signatures
void helloWorld(char[]);
void wordComparison(char[]);


int main()
{
    char string[SIZE];


    // ask user to enter string
    printf("Enter a string (max 50 characters):\n");

    fgets(string, SIZE - 1, stdin);

    // take the /n from fgets function and place null terminator instead to end string
    if (string[strlen(string) - 1] == '\n')
    {
        string[strlen(string) - 1] = '\0';
    }
    
    helloWorld(string);

    wordComparison(string);

    return 0;

}// End main()

// Function to compare string to "hello world"
void helloWorld(char string[])
{
    char greeting[SIZE]= "Hello World";
    int result = 0;

    // Compare both strings and store it in result
    result = strcmp(string, greeting);


    if (result == 0)
    {
        printf("\nStrings are the same\n");
    }
    else
    {
        printf("\nStrings and NOT the same\n");
    }
}// end helloWorld()

// function to count the occurrence of 'is'
void wordComparison(char string[])
{
    int lengthString, lengthWord = 0;
    char word[SIZE] = "is";
    int count = 0;
    int i, j = 0;
    char charInString, charInWord = ' ';


    lengthString = strlen(string);
    lengthWord = strlen(word);

    for (i = 0; i <= lengthString - lengthWord; i++) 
    {

        // Check if the current substring matches the word
        for (j = 0; j < lengthWord; j++) 
        {
            charInString = string[i + j];
            charInWord = word[j];

            // Manually convert characters to lowercase for comparison
            if (charInString >= 'A' && charInString <= 'Z') 
            {
                charInString += 32;
            }

            if (charInWord >= 'A' && charInWord <= 'Z') 
            {
                charInWord += 32;
            }

            if (charInString != charInWord) 
            {
                break;
            }
        }

        // If the substring matches the word, increment the count
        if (j == lengthWord) 
        {
            count++;
        }
    }

    printf("\nThe frequency of the word 'is': %d\n", count);

}//end wordComparison()







