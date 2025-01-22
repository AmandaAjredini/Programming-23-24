/*

Program Description: Strings and string functions

Author: Amanda Ajredini

Date: 05/03/2024

*/

#include <stdio.h>
#include <strings.h>

#define SIZE 31

void countVowel(char[]);
int stringLength(char []);

int main()
{
    char string[SIZE];
    int length = 0;


    printf("Enter a string (max 20 characters):\n");

    fgets(string, SIZE, stdin);

    if (string[strlen(string) - 1] == '\n') 
    {
        string[strlen(string) - 1] = '\0';
    }

    countVowel(string);

    length = stringLength(string);

    printf("Numbers of characters in the string: %d\n", length);
    printf("String in reverse: ");
    
    reverseString(string);
    
    return 0;

}

void countVowel(char string[])
{
    int count = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {   
            count++;
        }
    }

    printf("\nThere are %d vowels in the string entered\n", count);
    
}

int stringLength(char string[])
{
    int length = 0;


    while (string[length] != '\0')
    {
        length++;
    }
    
    return length;
}

void reverseString(char string[])
{
    int length = stringLength(string);

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }    
}