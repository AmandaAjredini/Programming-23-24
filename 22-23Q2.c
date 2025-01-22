#include <stdio.h>
#include <string.h>

#define NUM_AVENGERS 6
#define NAME 21

void isAvenger(char *[]);
void favAvenger(void);


int main() 
{
    char *avengers[NUM_AVENGERS] = {"Iron Man", "Captain America", "Black Widow", "Thor", "Hulk", "Hawkeye"};
    

    isAvenger(avengers); // Check if guessed avenger is in the array
    
    addFavoriteAvengerToFile(); // Add favorite Avenger to the file

    return 0;
}

// Function to check if the guessed name is an Avenger
void isAvenger(char *avengers[]) 
{
    char guess[NAME];
    
    // Prompt user to guess an Avenger name
    printf("Guess the name of an Avenger: ");
    scanf("%s", guess);

    for (int i = 0; i < NUM_AVENGERS; i++) 
    {
        if (strcmp(guess, avengers[i]) == 0) 
        {
            printf("Correct\n");
            return; // exit when name if found
        }
    }

    printf("Bad guess - not an Avenger\n");

}

// Function to add the user's favorite Avenger to the file
void favAvenger() 
{
    char favAvenger[NAME];

    // Prompt user to enter their favorite Avenger
    printf("Enter your favorite Avenger: ");
    scanf("%s", favAvenger);

    FILE *file = fopen("Avengers.txt", "a"); // Open file in append mode

    if (file == NULL) 
    {
        printf("Error opening file!\n");
        return;
    }

    fputs(favAvenger, file); // Append favorite Avenger to the file
    fclose(file); // Close the file
}
