/*

Program Description:

Author: Amanda Ajredini

Date: 09/04/2024

*/


// Header Files
#include <stdio.h>
#include <string.h>

// Symbolic Names
#define SIZE 10

// Function signatures
int isGuess(char[], char);

int main()
{
    char targetWord[SIZE] = "projector";
    char guessedWord[SIZE] = "_________";
    int guessesAllowed = 7;
    char replay;
    

    do 
    {
        printf("\nWelcome to Guess the Word game!\n\n");
        printf("Guess the hidden word!\nYou have a total number of 7 guesses.\n");
        printf("Each time you guess a correct letter in the word, it will appear.\nGood Luck!!\n");

        do 
        {
            char guess;
            printf("\nEnter your guess (one character): ");
            scanf(" %c", &guess); // Space before %c to take up any leading whitespace characters
            
            // Clear input buffer
            while(getchar() != '\n');

            if (isGuess(targetWord, guess) == 1) 
            {
                for (int i = 0; i < SIZE; i++) 
                {
                    if (targetWord[i] == guess) 
                    {
                        guessedWord[i] = guess;

                    }// End inner if

                }// End for

                printf("\n'%c' is in the word: %s\n", guess, guessedWord);

                if (strcmp(targetWord, guessedWord) == 0) 
                {
                    printf("\nCongratulations! You guessed the word: %s\n", targetWord);
                    break;

                }// End inner if

            }// End if
            else 
            {
                printf("\n'%c' is not present in the word.\n", guess);
                guessesAllowed--;
                printf("Guesses left: %d\n", guessesAllowed);

                if (guessesAllowed == 0) 
                {
                    printf("\nGAME OVER!!\n");
                    printf("\nYou've ran out of guesses.\nThe word was: %s\n", targetWord);
                    break;

                }// End inner if

            }// End Else

        } while (guessesAllowed > 0);// End do while

        // Ask user if they would like to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &replay);

        // Clear input buffer
        while(getchar() != '\n');

        if (replay != 'y' && replay != 'Y')
        {
            break;// Exit loop if user doesn't want to replay

        }// End if
            
        // Reset game variables
        strcpy(guessedWord, "_________");
        guessesAllowed = 7;

    } while (1);// End do while

    printf("Thank you for playing!\n");

    return 0;

}// End main()

int isGuess(char targetWord[], char guess)
{
    for (int i = 0; i < SIZE; i++)
    {
        // If the guessed letter is in the word
        if (targetWord[i] == guess)
        {
            // Return 1 if the guessed letter is found in the word
            return 1;

        }// End if

    }// End for

    // return 0 if the guessed letter is not found in the word
    return 0;
    
} // End isGuess()