/*

Program Description: Reading a sentence from STDIN and calculating the number of characters in the sentence & appending the sentence to "My sentence is : "

Author: Amanda Ajredini

Date: 27/02/2024

*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char sent1[40];
    char sent2[40] = "My sentence is : ";
    int length = 0;


    printf("\nEnter a sentence:\n");

    fgets(sent1, 40, stdin);

    length = strlen(sent1);

    printf("\nNo. of Characters in the sentence is %d\n", length);

    strcat(sent2, sent1);
    printf("\n%s", sent2);

    return 0;

}