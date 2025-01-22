/*
Program Description: Printing any character any amount of times using a function

Author: Amanda Ajredini

Date: 30/01/2024
*/

#include <stdio.h>

//function signature
void charPrint(char, int);

//beginning of main() function
int main ()
{   
    //initialising variables
    int no_chars = 0;
    char my_char;


    //ask user what character they wish to display
    printf("Which character to display?\n");
    scanf("%c", &my_char);

    //clear the input buffer
    while(getchar() != '\n');

    //ask user how many of character chosen they wish to display
    printf("How many characters to display?\n");
    scanf("%d", &no_chars);

    //call function charPrint()
    charPrint(my_char, no_chars);

    return 0;

}//end main()

//beginning of charPrint function
void charPrint(char ch, int num)
{
    int i;

    //use for loop to print the character num times
    for(i = 0; i < num; i++)
    {
        printf("%c", ch);
    }//end for

}// end charPrint()

