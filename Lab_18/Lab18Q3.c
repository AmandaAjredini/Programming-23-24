/*

Program Description: A program working with nested structures and structure arrays

Author: Amanda Ajredini

Date: 19/03/2024

*/

// Header Files
#include <stdio.h>

#define SIZENAME 11
#define SIZESURNAME 21
#define SIZEEYE 11
#define SIZECOUNTRY 35
#define SIZESTRUCTARRAY 3

// Structure Templates
struct date
{
    int day;
    int month;
    int year;
};

struct personalInfo
{
    char firstname[SIZENAME];
    char surname[SIZESURNAME];
    struct date DOB;
    float height;
    float weight;
    char eyecolour[SIZEEYE];
    char country[SIZECOUNTRY];
};

int main()
{   
    // create structure variables
    struct personalInfo people[SIZESTRUCTARRAY];


    // ask user to enter various biological data and store them in relevant parts of structure variable using scanf
    for (int i = 0; i < SIZESTRUCTARRAY; i++)
    {
        printf("\nEnter first name for person %d : ", i + 1);
        scanf("%s", people[i].firstname);
    }
    
    for (int i = 0; i < SIZESTRUCTARRAY; i++)
    {
        printf("\nEnter surname for person %d : ", i + 1);
        scanf("%s", people[i].surname);
    }

    for (int i = 0; i < SIZESTRUCTARRAY; i++)
    {
        printf("\nEnter date of birth in the format 01 01 2000 (press enter after each entry) for person %d:\n ", i + 1);
        scanf("%d%d%d", &people[i].DOB.day, &people[i].DOB.month, &people[i].DOB.year);
    }

    for (int i = 0; i < SIZESTRUCTARRAY; i++)
    {
        printf("\nEnter height for person %d : ", i + 1);
        scanf("%f", &people[i].height);
    }

    for (int i = 0; i < SIZESTRUCTARRAY; i++)
    {
        printf("\nEnter weight for person %d : ", i + 1);
        scanf("%f", &people[i].weight);
    }

    for (int i = 0; i < SIZESTRUCTARRAY; i++)
    {
        printf("\nEnter eye colour for person %d : ", i + 1);
        scanf("%s", people[i].eyecolour);
    }

    for (int i = 0; i < SIZESTRUCTARRAY; i++)
    {
        printf("\nEnter country of citizenship for person %d : ", i + 1);
        scanf("%s", people[i].country);
    }

    // displaying the person's data
    for (int i = 0; i < SIZESTRUCTARRAY; i++)
    {
        printf("\nFirstname (person %d): %s\n", i + 1, people[i].firstname);
        printf("\nSurname (person %d): %s\n", i + 1, people[i].surname);
        printf("\nDOB (person %d): %d/%d/%d\n", i + 1, people[i].DOB.day, people[i].DOB.month, people[i].DOB.year);
        printf("\nHeight (person %d): %.2fcm\n", i + 1, people[i].height);
        printf("\nWeight (person %d): %.1fkg\n", i + 1, people[i].weight);
        printf("\nEye colour (person %d): %s\n", i + 1, people[i].eyecolour);
        printf("\nCountry of citizenship (person %d): %s\n", i + 1, people[i].country);
    }
    
    return 0;
}