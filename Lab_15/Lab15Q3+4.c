/*

Program Description: A program that compares if 2 strings are the same, concatinating strings and calculating the length of a string

Author: Amanda Ajredini

Date: 27/02/2024

*/

// Header files
#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[21];
    char str2[21];
    char str3[30] = "First word entered is: ";
    int result, length = 0;


    // ask user to enter a word into first string
    printf("Enter first word:\n");
    scanf("%s", str1);

    // ask user to enter second word into second string
    printf("Enter second word:\n");
    scanf("%s", str2);

    // compare both strings using this function and save its result into a variable (1 - error, 0 - the same)
    result = strcmp(str1, str2);

    if (result == 0)
    {
        printf("\nWords are the same");
    }// end if
    else
    {
        printf("\nWords are different");
    }// end else

    // concatenate the first word entered to the end of the third string using this function
    strcat(str3, str1);
    printf("\n%s", str3);

    // calculate the length of the string in the last step by using this function and saving its result into a variable
    length = strlen(str3);
    printf("\nNumber of characters in string 3 is %d", length);

    return 0;
    
}// end main()