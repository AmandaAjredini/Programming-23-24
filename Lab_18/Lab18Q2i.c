/*

Program Description:

Author: Amanda Ajredini

Date: 09/04/2024

*/

// Header Files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Symbolic Names
#define SIZE 21

// Structure Templates
struct date
{
    int day;
    int month;
    int year;
};

struct athleteInfo
{
    char firstname[SIZE];
    char surname[SIZE];
    char nationality[SIZE];
    struct date DOB;
    float height;
    float weight;
    char event[SIZE];
};

// Function Signatures
void enterAthlete(struct athleteInfo *, int); // Pass by reference as we are making changes
void isParticipant(struct athleteInfo *, int); 

int main()
{
    struct athleteInfo *athlete;
    int nums = 0;
    int i;


    // Ask user how many numbers, i.e., data items they wish to enter
    printf("\nHow many 100m sprint athletes will take part in the Summer Olympics?\n");

    scanf("%d", &nums);

    // Allocate the block of memory
    athlete = calloc(nums, sizeof(struct athleteInfo));

    
    // Check if the memory was allocated successfully
    if(athlete == NULL)
    {
        printf("\nFailed to allocate memory\n");
        return 1; 

    } // End if
    else 
    {
        // Memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");

        printf("\nEnter the information for the %d athlete(s)\n", nums);

        // Clear input buffer
        while(getchar() != '\n');

        // Enter information for each athlete
        enterAthlete(athlete, nums);

        // Check if Paddy Jim O'Brien is taking part
        isParticipant(athlete, nums);

        // Free the allocated memory block once finished using it
        free(athlete);

    } // End else

    return 0;

} // End main()

void enterAthlete(struct athleteInfo *athlete, int nums)// Function to enter details of each participant
{
    // Enter details of athletes taking part in the 100m sprint
    for(int i = 0; i < nums; i++)
    {
        printf("Enter athlete %d details:\n", i + 1);

        printf("\nFirstname:\n");
        fgets(athlete[i].firstname, SIZE-1, stdin);

        printf("\nSurname:\n");
        fgets(athlete[i].surname, SIZE-1, stdin);

        printf("\nNationality:\n");
        fgets(athlete[i].nationality, SIZE-1, stdin);

        printf("\nDate of birth in the format dd/mm/yyyy (Press enter key after each entry day, month, year):\n");
        scanf("%d%d%d", &athlete[i].DOB.day, &athlete[i].DOB.month, &athlete[i].DOB.year);

        while (getchar() != '\n');// Clear input buffer

        printf("\nHeight:\n");
        scanf("%f", &athlete[i].height);

        printf("\nWeight:\n");
        scanf("%f", & athlete[i].weight);

        while (getchar() != '\n');// Clear input buffer

        // All athletes will be competing the same event so 100m Sprint as set as the event for all
        strcpy(athlete[i].event, "100m sprint");

    } // End for
 
} // End enterAthlete()

void isParticipant(struct athleteInfo *athlete, int nums)// Function to check if any participant is named Paddy Jim O'Brien and is Irish
{
    // For loop goes through each participant for the below checks
    for(int i = 0; i < nums; i++)
    {
        // strcmp() function is used to compare the firstname, surname and nationality (0 for true, 1 for false)
        if( strcmp(athlete[i].firstname, "Paddy Jim\n") == 0 && 
            strcmp(athlete[i].surname, "O'Brien\n") == 0 && 
            strcmp(athlete[i].nationality, "Irish\n") == 0)
        {
            printf("\nPaddy Jim O'Brien IS a participant");

            // If participant is found, end function 
            return;

        } // End if

    }// End for

    // Otherwise, NOT a participant
    printf("\nPaddy Jim O'Brien IS NOT a participant");
    
} // End checkName()