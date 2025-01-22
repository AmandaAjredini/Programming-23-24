/*

LAB TEST 2

Program Description: A word guessing game that allows the user to guess one letter at a time and each letter appearing
                     when it is found in the word to be guessed. The user has a maximum of 7 attempts. The game can end
                     two ways; when the attempts are all used up, or when the user correctly guesses all characters in the word.

Author: Amanda Ajredini

Date: 09/04/2024

*/

// Header Files
#include <stdio.h>
#include <string.h> // Allows access to string functions

// Symbolic Names
#define SIZE 7      // Word is 6 letters long but allow an extra number for the null character 

// Function Signatures
int isLetter(char[], char); // Function to check if character is in the word


int main()
{
    char targetWord[SIZE] = "coding";
    char guessWord[SIZE] = "______";
    int guessesAllowed = 7;
    char userInput = '\0';


    // Print Welcome / Instructions for the user
    printf("\nWelcome to the Word Guessing game!\n\n");
    printf("Guess the hidden word!\nYou have a maximum number of 7 guesses.\n");
    printf("Each time you guess a correct letter in the word, it will appear.\nGood Luck!!\n");


    // Do while allows the following code to occur ATLEAST once as long as the remaining attempts are greater than 0
    do
    {   
        // Ask user to enter a guess one character at a time
        printf("\nEnter your guess (one letter):\n");
        scanf(" %c", &userInput);

        // Clear input buffer to grab the whitespace character from scanf()
        getchar();

        if (isLetter(targetWord, userInput) == 1) // Call isLetter() to check if character guessed is in the word
        {
            for (int i = 0; i < SIZE; i++) // For loop to go through each character in the word
            {
                if (targetWord[i] == userInput) // If it is in the word, place character guessed wherever it ocurrs in guessWord[i]
                {
                    guessWord[i] = userInput;
                    
                } // End inner if
                
            } // End for

            printf("\nCorrect Guess! It is located here: %s\n", guessWord); // Display to user where the guessed letter is located

            if (strcmp(targetWord, guessWord) == 0) // Compare both words using string function. If all letters are found, end the game and display the target word to the user
            {
                printf("\n\nCongratulations!! You guessed the word: %s\n", targetWord);
                break; // First way the game can end

            } // End inner if
            
        } // End if

        else
        {
            printf("\n'%c' is NOT in the word\n", userInput); // If the conditon above is false, the character is not in the word

            guessesAllowed--; // Decrease amount of guesses left

            printf("Attempts remaining: %d\n", guessesAllowed); // Display remaining guesses to the user

            if (guessesAllowed == 0) // If the user has no remaining guesses, end the game and display game over message
            {
                printf("\nGAME OVER!!\n");
                printf("\nYou've ran out of attempts.\nThe correct word is: %s\n", targetWord);
                break; // Second way the game can end 
            
            } // End inner if

        } // End else

    } while (guessesAllowed > 0); // End do while
    
    return 0;

} // End main()

int isLetter(char targetWord[], char userInput) // Function to check if letter is in the word
{
    for (int i = 0; i < SIZE; i++) // Go through each letter in the target word and check if there's a match with the letter guessed
    {
        if (targetWord[i] == userInput) // Condition to check if guessed letter is in target word
        {
            return 1; // If the guess the user made is contained in the word, return 1 (true)

        } // End if
        
    } // End for

    return 0; // If guessed letter is not in the word, return 0 (false)
    
} // End isLetter()