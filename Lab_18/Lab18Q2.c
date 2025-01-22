/*

Program Description: A program working with nested structures

Author: Amanda Ajredini

Date: 19/03/2024

*/

// Header Files
#include <stdio.h>

// Structure Templates
struct date
{
    int day;
    int month;
    int year;
};

struct personalInfo
{
    char firstname[11];
    char surname[21];
    struct date DOB;
    float height;
    float weight;
    char eyecolour[11];
    char country[35];
};

int main()
{   
    // create structure variables
    struct personalInfo person1, person2;


    // ask user to enter various biological data and store them in relevant parts of structure variable using scanf
    printf("Enter your first name:\n");
    scanf("%s", person1.firstname);

    printf("Enter your surname:\n");
    scanf("%s", person1.surname);

    printf("Enter the your date of birth in the format 01 01 2000 (press enter after each entry):\n");
    scanf("%d%d%d", &person1.DOB.day, &person1.DOB.month, &person1.DOB.year);

    printf("Enter your height:\n");
    scanf("%f", &person1.height);

    printf("Enter your weight:\n");
    scanf("%f", &person1.weight);

    printf("Enter your eye colour:\n");
    scanf("%s", person1.eyecolour);

    printf("Enter your country of citizenship:\n");
    scanf("%s", person1.country);

    // displaying the person's data
    printf("\nYour firstname is: %s\n", person1.firstname);
    printf("\nYour surname is: %s\n", person1.surname);
    printf("\nYour DOB is: %d/%d/%d\n", person1.DOB.day, person1.DOB.month, person1.DOB.year);
    printf("\nYour height is: %.2fcm\n", person1.height);
    printf("\nYour weight is: %.1fkg\n", person1.weight);
    printf("\nYour eye colour is: %s\n", person1.eyecolour);
    printf("\nYour country of citizenship is: %s\n", person1.country);

    // copying the contents of first person's data to second person's
    person2 = person1;

    // displaying second person's data to show it contains first person's data
    printf("\nYour firstname is: %s\n", person2.firstname);
    printf("\nYour surname is: %s\n", person2.surname);
    printf("\nYour DOB is: %d/%d/%d\n", person2.DOB.day, person2.DOB.month, person2.DOB.year);
    printf("\nYour height is: %.2fcm\n", person2.height);
    printf("\nYour weight is: %.1fkg\n", person2.weight);
    printf("\nYour eye colour is: %s\n", person2.eyecolour);
    printf("\nYour country of citizenship is: %s\n", person2.country);


    // ask second user to enter their own data to overwrite what was copied into it
    printf("\nEnter your first name:\n");
    scanf("%s", person2.firstname);

    printf("Enter your surname:\n");
    scanf("%s", person2.surname);

    printf("Enter the your date of birth in the format 01 01 2000 (press enter after each entry):\n");
    scanf("%d%d%d", &person2.DOB.day, &person2.DOB.month, &person2.DOB.year);

    // display data entered by second person
    printf("\nYour firstname is: %s\n", person2.firstname);
    printf("\nYour surname is: %s\n", person2.surname);
    printf("\nYour DOB is: %d/%d/%d\n", person2.DOB.day, person2.DOB.month, person2.DOB.year);
    printf("\nYour height is: %.2fcm\n", person2.height);
    printf("\nYour weight is: %.1fkg\n", person2.weight);
    printf("\nYour eye colour is: %s\n", person2.eyecolour);
    printf("\nYour country of citizenship is: %s\n", person2.country);

    return 0;

}