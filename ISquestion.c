/*#include <stdio.h>

int main()
{
    printf("\"c:\\ is the root directory of drive c\", said the teacher.");

    return 0;
}*/

// Header Files
#include <stdio.h>
#include <string.h>

// Symbolics Names
#define LENGTH 101

int main() 
{
    char sentence[LENGTH];
    char *ptr = sentence;
    char word[] = "is";
    int count = 0;


    printf("Enter a sentence (MAX 30 characters)\n\n"); // Ask user to enter a sentence max 30 characters
    fgets(sentence, LENGTH - 1, stdin);

    sentence[strlen(sentence) - 1] = '\0'; // Replace '\n' character from fgets with the null character

    while ((ptr = strstr(ptr, word)) != NULL) // Search for occurrences of the word "is" in the string
    {
        count++;
        ptr = ptr + strlen(word);
        
    }// End while

    printf("\nThe word \"%s\" occurs %d times.\n", word, count); // Display the count of occurrences of the word "is"

    return 0;

}// End main()
